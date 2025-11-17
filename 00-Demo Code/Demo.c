//
// Created by Administrator on 25-11-14.
//
#include<stdio.h>
#include<math.h>


void selectionSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int a = 1;
    a = a / 0;
    printf("a=%d", a);

    return 0;
}
