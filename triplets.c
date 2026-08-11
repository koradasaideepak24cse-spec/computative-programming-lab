#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{ return (*(int *)a - *(int *)b); }
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);
    qsort(arr, n, sizeof(int), compare);
    int found = 0;
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                printf("%d %d %d\n", arr[i], arr[left], arr[right]);
                found = 1;
                left++;
                right--; }
            else if (sum < target)
            {  left++;  }
            else { right--; } }  }
    if (!found) {
        printf("No Triplet Found"); }
    return 0; }
