#include <stdio.h>

// 选择排序函数：对整数数组进行升序排序
void selectionSort(int arr[], int n) {
    int i, j;
    int temp;
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// 打印数组元素
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {6, 5, 2, 1, 4, 3};
    const int n = sizeof(arr) / sizeof(arr[0]); // 计算数组长度

    printf("排序前的数组：");
    printArray(arr, n);

    selectionSort(arr, n); // 调用选择排序

    printf("排序后的数组：");
    printArray(arr, n);

    return 0;
}
