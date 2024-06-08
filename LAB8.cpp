#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Зміна місцями, якщо поточний елемент менший за наступний
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Виклик функції сортування
    bubbleSort(arr, n);

    // Вивід відсортованого масиву у зменшеному порядку
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
