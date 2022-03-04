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

//Task E
bool isTwinPrime(int n){
  if(isPrime(n) == 1){
    
    if(isPrime(n+2) == 1 || isPrime(n-2) == 1){
      return 1;
    }else{
      return 0;
    }
    
  }else{
    
     return 0;
     
  }
}

//Task F
int nextTwinPrime(int n){
  bool gotIt = false;
  int next = n + 1;

  do{
    if(isTwinPrime(next) == true){
      gotIt = true;
    }else{
      next += 1;
    }
  }while(gotIt == false);

  return next;
}

//Task G
int largestTwinPrime(int a, int b){
  int biggest = 0;
  
  for(int i = a; i <= b; i++){
    
    if(isTwinPrime(i) == true){
      biggest = i;
      
    }
  }
  
  if(biggest > 0){
    return biggest;
  }else{
    return -1;
      }
}
