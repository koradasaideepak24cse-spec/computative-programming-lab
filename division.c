#include <stdio.h>
int main() {
    int dividend, divisor;
    scanf("%d", &dividend);
    scanf("%d", &divisor);
    int quotient = 0;
    int sign = 1;
    if (dividend < 0) {
        dividend = -dividend;
        sign = -sign; }
    if (divisor < 0) {
        divisor = -divisor;
        sign = -sign; }
    while (dividend >= divisor) {
        dividend = dividend - divisor;
        quotient++; }
    quotient = quotient * sign;
    printf("%d", quotient);
    return 0; }
