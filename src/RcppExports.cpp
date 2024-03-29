// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// hilbert_encode
NumericMatrix hilbert_encode(std::vector<unsigned> x, int bpp);
RcppExport SEXP _iptools_hilbert_encode(SEXP xSEXP, SEXP bppSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bpp(bppSEXP);
    rcpp_result_gen = Rcpp::wrap(hilbert_encode(x, bpp));
    return rcpp_result_gen;
END_RCPP
}
// int_ip_to_subnet
StringVector int_ip_to_subnet(StringVector ip_addresses, IntegerVector prefix_lengths);
RcppExport SEXP _iptools_int_ip_to_subnet(SEXP ip_addressesSEXP, SEXP prefix_lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type prefix_lengths(prefix_lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(int_ip_to_subnet(ip_addresses, prefix_lengths));
    return rcpp_result_gen;
END_RCPP
}
// ipv6_to_bytes
List ipv6_to_bytes(std::vector < std::string > input);
RcppExport SEXP _iptools_ipv6_to_bytes(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(ipv6_to_bytes(input));
    return rcpp_result_gen;
END_RCPP
}
// range_boundaries_to_cidr
std::vector < std::string > range_boundaries_to_cidr(long int ip_start, long int ip_end);
RcppExport SEXP _iptools_range_boundaries_to_cidr(SEXP ip_startSEXP, SEXP ip_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< long int >::type ip_start(ip_startSEXP);
    Rcpp::traits::input_parameter< long int >::type ip_end(ip_endSEXP);
    rcpp_result_gen = Rcpp::wrap(range_boundaries_to_cidr(ip_start, ip_end));
    return rcpp_result_gen;
END_RCPP
}
// hostname_to_ip
std::list < std::vector < std::string > > hostname_to_ip(std::vector < std::string > hostnames);
RcppExport SEXP _iptools_hostname_to_ip(SEXP hostnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type hostnames(hostnamesSEXP);
    rcpp_result_gen = Rcpp::wrap(hostname_to_ip(hostnames));
    return rcpp_result_gen;
END_RCPP
}
// ip_to_hostname
std::list < std::vector < std::string > > ip_to_hostname(std::vector < std::string > ip_addresses);
RcppExport SEXP _iptools_ip_to_hostname(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_to_hostname(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// ip_to_numeric
std::vector < unsigned int > ip_to_numeric(std::vector < std::string > ip_addresses);
RcppExport SEXP _iptools_ip_to_numeric(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_to_numeric(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// v6_scope
std::vector < unsigned long > v6_scope(std::vector < std::string > ip_addresses);
RcppExport SEXP _iptools_v6_scope(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(v6_scope(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// expand_ipv6
std::vector < std::string > expand_ipv6(std::vector < std::string > ip_addresses);
RcppExport SEXP _iptools_expand_ipv6(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(expand_ipv6(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// numeric_to_ip
std::vector < std::string > numeric_to_ip(std::vector < unsigned int > ip_addresses);
RcppExport SEXP _iptools_numeric_to_ip(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < unsigned int > >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(numeric_to_ip(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// ip_classify
CharacterVector ip_classify(CharacterVector ip_addresses);
RcppExport SEXP _iptools_ip_classify(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_classify(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// range_boundaries
DataFrame range_boundaries(std::vector < std::string > ranges);
RcppExport SEXP _iptools_range_boundaries(SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(range_boundaries(ranges));
    return rcpp_result_gen;
END_RCPP
}
// ip_in_range
std::vector < bool > ip_in_range(std::vector < std::string > ip_addresses, std::vector < std::string > ranges);
RcppExport SEXP _iptools_ip_in_range(SEXP ip_addressesSEXP, SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_in_range(ip_addresses, ranges));
    return rcpp_result_gen;
END_RCPP
}
// ip_in_any
std::vector < bool > ip_in_any(std::vector < std::string > ip_addresses, std::vector < std::string > ranges);
RcppExport SEXP _iptools_ip_in_any(SEXP ip_addressesSEXP, SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_in_any(ip_addresses, ranges));
    return rcpp_result_gen;
END_RCPP
}
// validate_range
std::vector < bool > validate_range(std::vector < std::string > ranges);
RcppExport SEXP _iptools_validate_range(SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_range(ranges));
    return rcpp_result_gen;
END_RCPP
}
// xff_extract
std::vector < std::string > xff_extract(std::vector < std::string > ip_addresses, std::vector < std::string > x_forwarded_for);
RcppExport SEXP _iptools_xff_extract(SEXP ip_addressesSEXP, SEXP x_forwarded_forSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type x_forwarded_for(x_forwarded_forSEXP);
    rcpp_result_gen = Rcpp::wrap(xff_extract(ip_addresses, x_forwarded_for));
    return rcpp_result_gen;
END_RCPP
}
// is_multicast
LogicalVector is_multicast(CharacterVector ip_addresses);
RcppExport SEXP _iptools_is_multicast(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ip_addresses(ip_addressesSEXP);
    rcpp_result_gen = Rcpp::wrap(is_multicast(ip_addresses));
    return rcpp_result_gen;
END_RCPP
}
// ip_numeric_to_binary_string
CharacterVector ip_numeric_to_binary_string(std::vector < unsigned int > input);
RcppExport SEXP _iptools_ip_numeric_to_binary_string(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < unsigned int > >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_numeric_to_binary_string(input));
    return rcpp_result_gen;
END_RCPP
}
// ip_to_binary_string
CharacterVector ip_to_binary_string(std::vector < std::string > input);
RcppExport SEXP _iptools_ip_to_binary_string(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(ip_to_binary_string(input));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_iptools_hilbert_encode", (DL_FUNC) &_iptools_hilbert_encode, 2},
    {"_iptools_int_ip_to_subnet", (DL_FUNC) &_iptools_int_ip_to_subnet, 2},
    {"_iptools_ipv6_to_bytes", (DL_FUNC) &_iptools_ipv6_to_bytes, 1},
    {"_iptools_range_boundaries_to_cidr", (DL_FUNC) &_iptools_range_boundaries_to_cidr, 2},
    {"_iptools_hostname_to_ip", (DL_FUNC) &_iptools_hostname_to_ip, 1},
    {"_iptools_ip_to_hostname", (DL_FUNC) &_iptools_ip_to_hostname, 1},
    {"_iptools_ip_to_numeric", (DL_FUNC) &_iptools_ip_to_numeric, 1},
    {"_iptools_v6_scope", (DL_FUNC) &_iptools_v6_scope, 1},
    {"_iptools_expand_ipv6", (DL_FUNC) &_iptools_expand_ipv6, 1},
    {"_iptools_numeric_to_ip", (DL_FUNC) &_iptools_numeric_to_ip, 1},
    {"_iptools_ip_classify", (DL_FUNC) &_iptools_ip_classify, 1},
    {"_iptools_range_boundaries", (DL_FUNC) &_iptools_range_boundaries, 1},
    {"_iptools_ip_in_range", (DL_FUNC) &_iptools_ip_in_range, 2},
    {"_iptools_ip_in_any", (DL_FUNC) &_iptools_ip_in_any, 2},
    {"_iptools_validate_range", (DL_FUNC) &_iptools_validate_range, 1},
    {"_iptools_xff_extract", (DL_FUNC) &_iptools_xff_extract, 2},
    {"_iptools_is_multicast", (DL_FUNC) &_iptools_is_multicast, 1},
    {"_iptools_ip_numeric_to_binary_string", (DL_FUNC) &_iptools_ip_numeric_to_binary_string, 1},
    {"_iptools_ip_to_binary_string", (DL_FUNC) &_iptools_ip_to_binary_string, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_iptools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
