#include <math.h>
#include <stdio.h>

int main() {
    long n;
    printf("Enter a binary number: ");
    scanf("%ld", &n);
    printf("%ld in binary = %d in decimal", n, conversion(n));
    return 0;
}

int conversion(long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
