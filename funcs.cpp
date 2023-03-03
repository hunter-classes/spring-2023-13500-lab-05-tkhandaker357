#include <iostream>
#include <cmath>
#include "funcs.h"

auto isDivisibleBy(int a, int b) -> bool {
    if (a % b != 0)
        return false;
    else
        return true;
}

auto isPrime(int num) -> bool {
    if (num <= 1) 
        return false;
    if (num == 2 || num == 3)
        return true; 
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i{ 5 }; i <= static_cast<int>(std::sqrt(num)); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

auto nextPrime(int num) -> int {
    int i{ (isPrime(num) ? num + 1 : num) };
    while (isPrime(i) == false) {
        ++i;
    }
    return i;
}

auto countPrimes(int a, int b) -> int {
    int primes{ 0 };

    for (int i{ a }; i <= b;) {
        i = nextPrime(i);
        ++primes;
    }

    return primes;
}

auto isTwinPrime(int num) -> bool {
    if (isPrime(num) == false)
        return false;
    
    if (isPrime(num + 2) == false || isPrime(num - 2) == false) 
        return false;

    return true;
}

auto nextTwinPrime(int num) -> int {
    int prime{ nextPrime(num) };
    
    while (isTwinPrime(prime) == false)
        prime = nextPrime(prime);
    
    return prime;
}

auto largestTwinPrime(int a, int b) -> int {
    
}