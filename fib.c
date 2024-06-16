#include <stdio.h>

int fib(int n) {
    if (n <= 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 32,sum = 0; // i tried numbers with fibonacci sequence and found that 33 is the biggest number whose fibonacci number is littlest than 4 million
    //but do not care 1 and start recursion from 32
    while (n >= 0) { // and i understood that fibonacci numbers are even in every 3 numbers
        sum += fib(n);
        n-=3;
    }
    
    printf("\nSum of even numbers: %d", sum);
    return 0;
}