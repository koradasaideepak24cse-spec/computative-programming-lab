#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++]; }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
    int total = n + m;
    if (total % 2 == 1)
        printf("%.1f\n", (float)c[total / 2]);
    else {
        float median = (c[total / 2 - 1] + c[total / 2]) / 2.0;
        printf("%.1f\n", median); }
    return 0; }
