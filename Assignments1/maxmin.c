#include <stdio.h>

void maxmin(int *arr, int n, int *max, int *min) {
    if (n == 1) {
        *max = *min = *arr;
    } else {
        int max1, min1, mid;
        if (n == 2) {
            if (*arr < *(arr+1)) {
                *max = *(arr+1);
                *min = *arr;
            } else {
                *max = *arr;
                *min = *(arr+1);
            }
        } else {
            mid = n/2;
            maxmin(arr, mid, max, min);
            maxmin(arr+mid, n-mid, &max1, &min1);
            if (*max < max1) {
                *max = max1;
            }
            if (*min > min1) {
                *min = min1;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the total number of numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max, min;
    maxmin(arr, n, &max, &min);
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);
    return 0;
}

