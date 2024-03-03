// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 1) {
        return false;
    }
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int count = 0;
    int number = 2;

    while (count < n) {
        if (checkPrime(number)) {
            count++;
        }
        number++;
    }
    return number - 1;
    
}

uint64_t nextPrime(uint64_t value) {
    for (uint64_t i = value + 1;; i++) {
        if (checkPrime(i)) {
            return i;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t b = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            b += i;
        }
    }
    return b;
}
