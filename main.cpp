#include <iostream>

#include "funcs.h"

int main()
{
  int a, b, c, d;

  a = 5;
  b = 3;
  c = 18;
  d = 2;

  std::cout << "Note: 0 means false and 1 means true as boolean values" << std::endl;

  //Task A
  bool divisibility = isDivisibleBy(a, b);
  std::cout << "The divisibility of " << a << " and " << b << ": " << divisibility << std::endl;

  divisibility = isDivisibleBy(c, d);
  std::cout << "The divisibility of " << c << " and " << d << ": " << divisibility << std::endl;

  //Task B
  bool prime = isPrime(a);
  std::cout << "\nIs " << a << " prime: " << prime << std::endl;
  std::cout << "Is " << c << " prime: " << prime << std::endl;

  //Task C
  int next = nextPrime(a);
  std::cout << "\nThe next prime of " << a << " is: " << next << std::endl;

  next = nextPrime(c);
  std::cout << "The next prime of " << c << " is: " << next << std::endl;

  //Task D
  int count = countPrimes(d, a);
  std::cout << "\nThere are " << count << " primes from " << d << " to " << a << std::endl;

  count = countPrimes(b, c);
  std::cout << "There are " << count << " primes from " << b << " to " << c << std::endl;

  //Task E
  bool twin = isTwinPrime(a);
  std::cout << "\nIs " << a << " a twin prime: " << twin << std::endl;

  twin = isTwinPrime(23);
  std::cout << "Is 23 a twin prime: " << twin << std::endl;

  //Task F
  int nextTwin = nextTwinPrime(a);
  std::cout << "\nThe next twin prime after " << a << ": " << nextTwin << std::endl;

  nextTwin = nextTwinPrime(c);
  std::cout << "The next twin prime after " << c << ": " << nextTwin << std::endl;

  //Task G
  int largest = largestTwinPrime(d, c);
  std::cout << "\nThe largest twin prime between " << d << " and " << c << ": " << largest << std::endl;

  largest = largestTwinPrime(633, 814);
  std::cout << "The largest twin prime between 633 and 814: " << largest << std::endl;
    
  return 0;
}
