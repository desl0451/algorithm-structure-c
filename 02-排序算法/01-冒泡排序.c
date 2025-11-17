#include <stdio.h>

void bubbleSort(int arr[], int size);

void printArray(int arr[], int size);

int main() {
    int arr[] = {5, 7, 1, 3, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}

void bubbleSort(int arr[], int size) {
    int temp = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 打印数组元素的函数
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
