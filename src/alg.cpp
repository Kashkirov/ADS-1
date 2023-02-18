// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
for (uint64_t t = 2; t < value; t++) {
        if (value % t == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t count = 0;
    if (!n) {
        return 0;
    }
    bool flag = false;
    for (uint64_t i = 2; i > 0; i++) {
        flag = false;
        for (uint64_t t = 2; t < i; t++) {
            if (i % t == 0) {
                flag = true;
                break;
            }
        }
        if (flag == true) {
            continue;
        } else {
            count++;
        }
        if (count == n) {
            return i;
        }
    }
return 0;
}
uint64_t nextPrime(uint64_t value) {
bool flag = false;
    for (uint64_t i = value+1; i > 0; i++) {
        flag = false;
        for (uint64_t t = 2; t < i; t++) {
            if (i % t == 0) {
                flag = true;
                break;
            }
        }
        if (flag == true) {
            continue;
        } else {
            return i;
        }
    }
return 0;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t count = 0;
    if (!hbound) {
        return 0;
    }
    bool flag = false;
    //int l_count = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        flag = false;
        for (uint64_t t = 2; t < i; t++) {
            if (i % t == 0) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            count += i;
        }
    }
    return count;
}
