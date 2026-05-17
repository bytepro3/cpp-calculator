#include <iostream>

int main() {
    std::cout << "=== Simple C++ Calculator ===" << std::endl;
    
    double num1, num2;
    int choice;
    
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    if (choice == 1) {
        std::cout << "Result of addition: " << (num1 + num2) << std::endl;
    } else if (choice == 2) {
        std::cout << "Result of subtraction: " << (num1 - num2) << std::endl;
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }
    
    return 0;
}
