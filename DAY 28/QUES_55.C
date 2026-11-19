// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int is_prime(int num) { 
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Is a prime number
}