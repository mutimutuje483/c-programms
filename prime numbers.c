#include <stdio.h>

int main() {
    int n, i;
    int isprime;

    for (n = 2; n <= 100; n++) {
        isprime = 1;  // assume n is prime

        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isprime = 0;  // found a divisor, not prime
                break;
            }
        }

        if (isprime == 1)
            printf("%d is a prime number\n", n);
        else
            printf("%d is not a prime number\n", n);
    }

    return 0;
}
