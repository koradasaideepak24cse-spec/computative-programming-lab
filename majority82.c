#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    int candidate = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;  }
        if (count == 0) {
            candidate = arr[i];
            count = 1;  } }
    int total_votes = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            total_votes++;  } }
    if (total_votes > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n"); } 
    return 0; }
