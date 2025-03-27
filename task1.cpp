//Include the necessary libraries
#include <iostream>
#include <string>

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

namespace TextOperations {
    std::string concat(std::string str1, std::string str2) {
        return str1 + str2;
    }
}

int main() {
    int num1, num2;
    
    std::cout << "Write the first number: ";
    std::cin >> num1;
    
    std::cout << "Write the second number: ";
    std::cin >> num2;

    // Lets use MathOperations first
    int sum = MathOperations::add(num1, num2);
    std::cout << "The sum of given numbers: " << sum << std::endl;

    // Lets use TextOperations next
    std::string combinedText = TextOperations::concat("Hello, ", "World!");
    std::cout << "   " << combinedText << std::endl;

    return 0;
}
