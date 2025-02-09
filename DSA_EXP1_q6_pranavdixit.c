#include <stdio.h>
void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, key = 4;
    linearSearch(arr, n, key);
    return 0;
}