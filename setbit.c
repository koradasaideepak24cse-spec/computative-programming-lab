#include <stdio.h>
int main(){
    unsigned long long n;
    scanf("%llu", &n);
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1; }
    printf("%d\n", count);
    return 0; }
