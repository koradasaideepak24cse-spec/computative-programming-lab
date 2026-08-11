#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    if (n & (1 << k))
        printf("1");
    else
        printf("0");
    return 0;
}
