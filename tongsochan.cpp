#include <stdio.h>

int sum_even_recursive(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    int last_num = arr[n - 1];
    if (last_num % 2 == 0) {
        return last_num + sum_even_recursive(arr, n - 1);
    } else {
        return sum_even_recursive(arr, n - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int sum_even = sum_even_recursive(arr, n);
    printf("Tong cac so chan trong mang la: %d\n", sum_even);
    return 0;
}
