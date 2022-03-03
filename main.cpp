#include <iostream>

#include "funcs.h"

int main()
{
  int a, b, c, d;

  a = 5;
  b = 3;
  c = 18;
  d = 2;

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
  std::cout << "\nFor " << a << " the twin prime is " << twin << std::endl;

  twin = isTwinPrime(23);
  std::cout << "For 23 the twin prime is " << twin << std::endl;
    
  return 0;
}
