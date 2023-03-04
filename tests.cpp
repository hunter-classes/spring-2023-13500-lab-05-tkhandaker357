#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Testing the isDivisibleBy function: ") {
    CHECK(isDivisibleBy(10, 5) == true);
    CHECK(isDivisibleBy(15, 7) == false);
    CHECK(isDivisibleBy(5000000, 20) == true);
}

TEST_CASE("Testing the isPrime function: ") {
    CHECK(isPrime(3) == true);
    CHECK(isPrime(17) == true);
    CHECK(isPrime(46) == false);
}

TEST_CASE("Testing the nextPrime function") {
    CHECK(nextPrime(13) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("Testing the countPrimes function") {
    CHECK(countPrimes(1, 73) == 21);
    CHECK(countPrimes(1, 174) == 40);
}

TEST_CASE("Testing the isTwinPrime function") {
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(137) == true);
    CHECK(isTwinPrime(2) == false);
}

TEST_CASE("Testing the nextTwinPrime function") {
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(19) == 29);
}

TEST_CASE("Testing the largestTwinPrime function") {
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}