#include <unistd.h>

void mx_printchar(char c);

void mx_recurcion(int n) {
    if (n / 10 > 0) {
        mx_recurcion(n / 10);
    }
    mx_printchar(n % 10 + 48);
}

void mx_printint(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    mx_recurcion(n);
}

