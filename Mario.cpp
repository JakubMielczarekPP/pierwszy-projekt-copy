#include <iostream>

int main() {
    int height = 0;
    
    // re-prompt until user gives a number greater than or equal to 1
    while(height < 1) {
        std::cout << "Podaj wysokosc: ";
        std::cin >> height;
    }

    // print the bricks
    for (int i = height; i > 0; i--) {
        for (int j = 0; j <= height; j++) {
            if (j >= i) std::cout << "#";
            else std::cout << " ";
        }

        std::cout << "\n";
    }

    return 0;
}