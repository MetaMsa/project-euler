#include <stdio.h>

int main() {
    long long int n=600851475143;
    int i;
    printf("Prime factors of %d are: ", n);
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            n = n / i;
        }
    }
    printf("%d ", --i);
    return 0;
}