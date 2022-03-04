#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("divisible integers"){
  //positives
  CHECK(isDivisibleBy(50, 5) == true);
  //positive and negative
  CHECK(isDivisibleBy(-100, 10) == true);
  //zero
  CHECK(isDivisibleBy(0, 20) == true);
  //negatives
  CHECK(isDivisibleBy(-180, -3) == true);
}

TEST_CASE("not divisible integers"){
  //positives
  CHECK(isDivisibleBy(18, 4) == false);
  //negative and positive
  CHECK(isDivisibleBy(-20, 3) == false);
  //undefined
  //CHECK(isDivisibleBy(18, 0) == false); -> cannot be done; test crashed
  //negatives
  CHECK(isDivisibleBy(-5, -3) == false);
  //fractions
  CHECK(isDivisibleBy(1, 2) == false);
}

TEST_CASE("is prime - smaller"){
  CHECK(isPrime(2) == true);
  CHECK(isPrime(3) == true);
  CHECK(isPrime(5) == true);
  CHECK(isPrime(7) == true);
}

TEST_CASE("is prime - larger"){
  CHECK(isPrime(47) == true);
  CHECK(isPrime(97) == true);
  CHECK(isPrime(331) == true);
  CHECK(isPrime(1303) == true);
}

TEST_CASE("is not prime"){
  CHECK(isPrime(4) == false);
  CHECK(isPrime(18) == false);
  CHECK(isPrime(22) == false);
  CHECK(isPrime(1220) == false);
}

TEST_CASE("the next prime"){
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(3) == 5);
  CHECK(nextPrime(9) == 11);
  CHECK(nextPrime(810) == 811);
}

TEST_CASE("number of primes"){
  CHECK(countPrimes(4, 18) == 5);
  CHECK(countPrimes(16, 22) == 2);
  CHECK(countPrimes(633, 814) == 26);
  CHECK(countPrimes(1460, 1470) == 0);
}

TEST_CASE("is twin prime"){
  CHECK(isTwinPrime(199) == 1);
  CHECK(isTwinPrime(2111) == 1);
}

TEST_CASE("is not twin prime"){
  CHECK(isTwinPrime(1561) == 0);
  CHECK(isTwinPrime(2003) == 0);
}

TEST_CASE("next twin prime"){
  CHECK(nextTwinPrime(101) == 103);
  CHECK(nextTwinPrime(733) == 809);
  CHECK(nextTwinPrime(1571) == 1607);
}

TEST_CASE("largest twin prime"){
  //largest at the end of the range
  CHECK(largestTwinPrime(18, 101) == 101);
  //no twin primes
  CHECK(largestTwinPrime(1327, 1370) == -1);
}
