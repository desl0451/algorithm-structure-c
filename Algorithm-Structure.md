# 算法

## 01-贪心算法


## 02-排序算法



#### 1.冒泡排序
```c++
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

```




#### 2.插入排序
![排序算法](assets/4dfae97274c4aa4b5c632947a9efe6e3.gif)
```c++
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

```