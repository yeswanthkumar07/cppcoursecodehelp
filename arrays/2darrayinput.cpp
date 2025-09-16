#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    int row = 3;
    int col = 4;

    // Input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter input for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix:\n";

    // Output
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
