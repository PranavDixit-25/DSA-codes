#include <stdio.h>
void insertElement(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value;
    (*n)++;
}
void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5;
    printf("Original array: ");
    printArray(arr, n);
    insertElement(arr, &n, 2, 10);
    printf("After insertion: ");
    printArray(arr, n);
    deleteElement(arr, &n, 3);
    printf("After deletion: ");
    printArray(arr, n);
    return 0;
}