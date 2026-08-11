#include <stdio.h>
int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    int start = i, end = j;
    if (start > end) {
        int temp = start;
        start = end;
        end = temp; }
    int maxCycle = 0;
    for (int n = start; n <= end; n++) {
        unsigned long long num = n;
        int cycle = 1;
        while (num != 1) {
            if (num % 2 == 0)
                num = num / 2;
            else
                num = 3 * num + 1;
            cycle++; }
        if (cycle > maxCycle)
            maxCycle = cycle; }
    printf("%d %d %d\n", i, j, maxCycle);
    return 0; }
