#include <iostream>
#include "funcs.h"

auto main() -> int {
    std::cout << "Is 10 divisible by 5? " << (isDivisibleBy(10, 5) ? "Yes" : "No") << '\n';
    std::cout << "Is 3 a prime number? " << (isPrime(3) ? "Yes" : "No") << '\n';
    std::cout << "What is the next prime number after 13? " << nextPrime(13) << '\n';
    std::cout << "How many primes are there between 1 and 72? " << countPrimes(1, 72) << '\n';
    std::cout << "Is 17 a twin prime number? " << isTwinPrime(17) << '\n';
    std::cout << "What is the next twin prime number after 19? " << nextTwinPrime(19) << '\n';
    std::cout << "What is the largest twin prime number between 5 and 18? " << largestTwinPrime(5, 18) << '\n';
    return 0;
}
