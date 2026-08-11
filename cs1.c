#include <stdio.h>
#include <stdlib.h>
int* countingSort(int arr_count, int* arr, int* result_count) {
    int* frequency = (int*)calloc(100, sizeof(int));
    *result_count = 100;
    for (int i = 0; i < arr_count; i++) {
        frequency[arr[i]]++; }
    return frequency; }
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); } 
    int result_count;
    int* result = countingSort(n, arr, &result_count); 
    for (int i = 0; i < result_count; i++) {
        printf("%d", result[i]);
        if (i < result_count - 1) {
            printf(" "); }  }
    printf("\n"); 
    free(arr);
    free(result);
    return 0; }
