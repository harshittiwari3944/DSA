#include <iostream>
using namespace std;

void print_hourglass(int rows) {
    if (rows <= 0) {
        return;
    }

    // Top half of the hourglass
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }

    // Bottom half of the hourglass
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }
}

int main() {
    int rows = 5;  // Adjust this value for a larger or smaller hourglass
    print_hourglass(rows);

    return 0;
}