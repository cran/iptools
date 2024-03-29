context("Test IP conversion")

test_that("dotted-decimal to numeric works for single values",{
  result <- ip_to_numeric("24.0.5.11")
  expect_true(is.vector(result, "numeric"))
  expect_that(length(result), equals(1))
  expect_that(result, equals(402654475))
})

test_that("dotted-decimal to numeric works for multiple values",{
  result <- ip_to_numeric(c("24.0.5.11", "211.3.77.96"))
  expect_true(is.vector(result, "numeric"))
  expect_that(length(result), equals(2))
  expect_that(result, equals(c(402654475, 3540208992)))
})

test_that("Error handlers for dotted-decimal to numeric work",{
  result <- ip_to_numeric("arfhfgsfd")
  expect_true(is.vector(result, "numeric"))
  expect_that(length(result), equals(1))
  expect_that(result, equals(0))
})

test_that("Numeric to dotted-decimal works for single values",{
  result <- numeric_to_ip(402654475)
  expect_true(is.vector(result, "character"))
  expect_that(length(result), equals(1))
  expect_that(result, equals("24.0.5.11"))
})

test_that("Numeric to dotted-decimal works for multiple values",{
  result <- numeric_to_ip(c(402654475, 3540208992))
  expect_true(is.vector(result, "character"))
  expect_that(length(result), equals(2))
  expect_that(result, equals(c("24.0.5.11", "211.3.77.96")))
})

test_that("Subnet calculations work", {

  host_ip <- c("1.2.3.4", "4.3.2.1")
  subnet_len <- c(24L, 25L)
  expect_equal(
    ip_to_subnet(host_ip, subnet_len),
    ip_to_subnet(c("1.2.3.4/24", "4.3.2.1/25"))
  )

})
