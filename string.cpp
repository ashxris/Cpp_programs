#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "The 3x3 matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
        }
        cout << " sum of row " << i + 1 << " - " << rowSum << endl;
    }

    return 0;
}
