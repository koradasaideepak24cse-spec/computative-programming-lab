#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min_idx = 0;
    int max_idx = 0;
      for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }
    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
