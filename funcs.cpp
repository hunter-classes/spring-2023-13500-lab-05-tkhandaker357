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
    int i{ isPrime(num) ? num + 1 : num };
    for (i; isPrime(i) == false; ++i);
    return i;
}

auto countPrimes(int a, int b) -> int {
    int primes{ 0 };

    for (int i{ a }; i <= b; i = nextPrime(i)) {
        if (isPrime(i) == true) 
            ++primes;
    }

    return primes;
}

auto isTwinPrime(int num) -> bool {
    if (isPrime(num) == false)
        return false;
    
    if (isPrime(num + 2) == true || isPrime(num - 2) == true) 
        return true;

    return false;
}

auto nextTwinPrime(int num) -> int {
    int i{ isTwinPrime(num) ? nextPrime(num) : num };
    for (i; isTwinPrime(i) == false; i = nextPrime(i));
    return i;
}

auto largestTwinPrime(int a, int b) -> int {
    int currentTwinPrime{ -1 };

    for (int i{ a }; i <= b; ++i) {
        if (nextTwinPrime(i) > b)
            return currentTwinPrime;
        currentTwinPrime = nextTwinPrime(i);
    }

    return currentTwinPrime;
}