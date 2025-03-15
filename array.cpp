#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int max, min;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    max = numbers[0];
    min = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    return 0;
}
