#include <iostream>
#include <string>

int subtract(int a, int b) {
    return a - b;  // Function to subtract two integers
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Read a line of input from the user

    std::cout << "Enter 2 numbers to find the difference: ";
    int num1, num2;
    std::cin >> num1 >> num2;  // Read two integers from the user

    std::cout << "You entered the string: " << input << std::endl;  // Output the entered string
    std::cout << "Length of the string: " << input.length() << std::endl;  // Output the length of the string

    std::cout << "The difference between " << num1 << " and " << num2 << " is: " 
              << subtract(num1, num2) << std::endl;  // Output the difference of the two numbers

    return 0;  // Indicate that the program ended successfully
}  // End of main function