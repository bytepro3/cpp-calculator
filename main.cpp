#include <iostream>

int main() {
    std::cout << "=== Simple C++ Calculator ===" << std::endl;
    
    double num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "Result of addition: " << (num1 + num2) << std::endl;
    
    return 0;
}
