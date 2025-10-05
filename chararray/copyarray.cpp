#include<iostream>
using namespace std;

void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int source[100], destination[100]; // assuming max 100 elements

    cout << "Enter " << n << " elements for the source array:\n";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    // Call the function to copy array
    copyArray(source, destination, n);

    // Display copied array
    cout << "Copied array:\n";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }
    cout << endl;

    return 0;
}
