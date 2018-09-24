#' Convert a \emph{pyasn} generated CIDR data file to a trie
#'
#' @param asn_table_file filename of dat file (can be gzip'd)
#' @export
asn_table_to_trie <- function(asn_table_file) {

  read.csv(
    file = asn_table_file,
    sep = "\t",
    comment.char = ";",
    col.names = c("cidr", "asn")
  ) -> rip

  cidr_split <- stri_split_fixed(rip$cidr, "/", 2, simplify = TRUE)

  ip <- cidr_split[,1]
  mask <- cidr_split[,1]
  prefix = stri_sub(ip_to_binary_string(ip), 1, mask)

  triebeard::trie(prefix, rip$asn)

}

#' Match IP addresses to autonomous systems
#'
#' @param cidr_trie trie created with \code{asn_table_to_trie()}
#' @param ip character vector or numeric vector of IPv4 addresses
#' @export
ip_to_asn <- function(cidr_trie, ip) {

  if (inherits(ip, "numeric")) {
    ip <- ip_numeric_to_binary_string(ip)
  } else {
    ip <- ip_to_binary_string(ip)
  }

  triebeard::longest_match(cidr_trie, ip)

}

#' Determine if a vector if IPv4 addresses are in a vector of CIDRs
#'
#' @param ips character vector or numeric vector of IPv4 addresses
#' @param cidrs character vector or numeric vector of IPv4 CIDRs
#' @note auto-appends \code{/32} if a bare IPv4 is detected
#' @return \code{data_frame} with \code{ips} column and a logical \code{in_cdir} column
#' @export
ips_in_cidrs <- function(ips, cidrs) {

  cidrs[!stri_detect_fixed(cidrs, "/")] <- sprintf("%s/32", cidrs[!stri_detect_fixed(cidrs, "/")])

  cidr_split <- stri_split_fixed(cidr, "/", 2, simplify = TRUE)

  ip <- cidr_split[,1]
  mask <- cidr_split[,2]
  prefix <- stri_sub(ip_to_binary_string(ip), 1, mask)
  value <- rep(TRUE, length(prefix))

  cidr_trie <- trie(prefix, value)

  data.frame(
    ips = ips,
    in_cidr = !is.na(longest_match(cidr_trie, ip_to_binary_string(ips)))
  ) -> out

  class(out) <- c("tbl_df", "tbl", "data.frame")

  out

}

#' Return the number of hosts in a CIDR block
#'
#' TODO: ipv4 validation
#'
#' @param cidrs character vector of IPv4 CIDRs
#' @export
host_count <- function(cidrs) {

  is_cidr <- stri_detect_fixed(cidrs, "/")

  cidrs[!is_cidr] <- sprintf("%s/32", cidrs[!is_cidr])

  tmp <- stri_split_fixed(cidrs, "/")
  tmp <- sapply(tmp, "[", 2)
  tmp <- as.numeric(tmp)
  sapply(tmp, function(x) (2^(32-x)))

}