#include <iostream>

int main() {
    std::cout << "Hello world from Тимур!" << std::endl;

    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    std::cout << "Большее число: " << ((a > b) ? a : b) << std::endl;
    return 0;
}