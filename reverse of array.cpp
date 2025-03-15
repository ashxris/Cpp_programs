#include <iostream>

int main() {
    int arr[] = {5, 4, 6, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int output[size];


    output[0] = arr[size - 1];

    for (int i = 0; i < size - 1; ++i) {
        output[i + 1] = arr[i];
    }

    std::cout << "Output array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << output[i] << " ";
    }

    return 0;
}
