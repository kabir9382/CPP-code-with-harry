#include <iostream>

int main() {
    int X;
    std::cin >> X;

    // If X is even, start from the next odd number
    if (X % 2 == 0) {
        X += 1;
    }

    // Print the next six odd numbers starting from X
    for (int i = 0; i < 6; ++i) {
        std::cout << X + 2 * i << std::endl;
    }

    return 0;
}
