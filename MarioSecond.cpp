#include <iostream>

using namespace std;

int main() {
    int height = 0;
    
    // re-prompt until user gives a number greater than or equal to 1
    while (height < 1) {
        cout << "Height: ";
        cin >> height;
    }

    // print the bricks
    for (int i = height; i > 0; i--) {
        int bricks = 0;
        for (int j = 0; j <= height; j++) {
            if (j >= i) {
                bricks++;
                cout << "#";
            } else {
                cout << " ";
            }
        }

        cout << "  ";

        for (int j = 0; j < bricks; j++) {
            cout << "#";
        }

        cout << "\n";
    }
}