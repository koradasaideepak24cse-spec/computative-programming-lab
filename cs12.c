#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;    
    int frequency[100] = {0};
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        frequency[val]++; }
    int first = 1; 
    for (int i = 0; i < 100; i++) {
        while (frequency[i] > 0) {
            if (!first) {
                printf(" "); }
            printf("%d", i);
            first = 0;
            frequency[i]--; } }
    printf("\n");
    return 0; }
