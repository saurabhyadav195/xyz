#include <stdio.h>
// Function to perform insertion sort
void insertionSort(int arr[], int n) {
 for (int i = 1; i < n; i++) {
 int key = arr[i]; // Current element to be inserted
 int j = i - 1;
 // Move elements greater than key one position ahead
 while (j >= 0 && arr[j] > key) {
 arr[j + 1] = arr[j];
 j--;
 }
 // Place the key at its correct position
 arr[j + 1] = key;
 }
}
// Function to print array
void printArray(int arr[], int n) {
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int main() {
 int n;
 // Ask user for number of elements
 printf("Enter number of elements: ");
 scanf("%d", &n);
 int arr[n]; // Variable Length Array
 // Input array elements
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
// Display original array
 printf("\nOriginal array: ");
 printArray(arr, n);
 // Perform insertion sort
 insertionSort(arr, n);
 // Display sorted array
 printf("Sorted array: ");
 printArray(arr, n);
 return 0;
}
