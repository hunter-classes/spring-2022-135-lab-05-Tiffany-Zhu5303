#include <iostream>
#include "funcs.h"

// Task A:

bool isDivisibleBy(int n, int d){
  if(n % d == 0){
    return true;
  }else{
    return false;
  }
}

//Task B:
bool isPrime(int n){
  if(n == 2){
    
    return true;
    
  }else if( n <= 1){
    
    return false;
    
  }else{
    
    for(int i = 2; i < n; i++){
      if(n % i == 0){
	
	return false;
	
      }
    }
    
    return true;
  }
}

//Task C:
int nextPrime(int n){
  int next = n + 1;
  bool value = false;
  
  do{
    if(isPrime(next) == true){
      value = true;
      return next;
    }else{
      next += 1;
    }
  }while(value == false);

  return next;
}

//Task D
int countPrimes(int a, int b){
  int count = 0;
  
  for(int i = a; i <= b; i++){
    if(isPrime(i) == true){
      count += 1;
    }
  }

  return count;
}

