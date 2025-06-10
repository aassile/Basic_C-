#include <iostream>
#include <string>

int int_add(int a, int b) {
    return a + b;  // Function to subtract two integers
}

float float_add(float a, float b) {
    return a + b;  // Function to add two floats
}

int int_multiply(int a, int b) {
    return a * b;  // Function to multiply two integers
}

float float_multiply(float a, float b) {
    return a * b;  // Function to multiply two floats
}

int int_subtract(int a, int b) {
    return a - b;  // Function to subtract two integers
}

float float_subtract(float a, float b) {
    return a - b;  // Function to subtract two floats
}

int int_divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");  // Handle division by zero
    }
    return a / b;  // Function to divide two integers
}

float float_divide(float a, float b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");  // Handle division by zero
    }
    return a / b;  // Function to divide two floats
}

int modulus(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");  // Handle division by zero
    }
    return a % b;  // Function to calculate modulus of two integers
}

float modulus(float a, float b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");  // Handle division by zero
    }
    return std::fmod(a, b);  // Function to calculate modulus of two floats
}

void print_welcome_message() {
    std::cout << "Welcome to the User Input Practice Program!\n" << std::endl;  // Print a welcome message
}

void exit_sequence() {
    std::cout << "Thank you for using the User Input Practice Program.\n\n" << "Press Enter to exit..." << std::endl;  // Print a goodbye message
    std::cin.ignore();  // Ignore any remaining input in the buffer
    std::cin.get();  // Wait for the user to press Enter
    std::cout << "Exiting the program...\n" << std::endl;  // Indicate that the program is exiting
    std::cout << "Goodbye!\n" << std::endl;  // Print goodbye message
}

int main() {

    print_welcome_message();  // Call function to print welcome message

    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Read a line of input from the user

    std::cout << "Enter 2 integers: ";
    int num1, num2;
    std::cin >> num1 >> num2;  // Read two integers from the user

    std::cout << "Now enter 2 floats: ";
    float float1, float2;
    std::cin >> float1 >> float2;  // Read two floats from the user

    std::cout << "You entered the string: " << input << std::endl;  // Output the entered string
    std::cout << "Length of the string: " << input.length() << "\n" << std::endl;  // Output the length of the string

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " 
              << int_add(num1, num2) << "\n" << std::endl;  // Output the sum of the two numbers

    std::cout << "The sum of " << float1 << " and " << float2 << " is: "
              << float_add(float1, float2) << "\n" << std::endl;  // Output the sum of the two floats
    
    std::cout << "The difference between " << num1 << " and " << num2 << " is: " 
              << int_subtract(num1, num2) << "\n" << std::endl;  // Output the difference of the two numbers

    std::cout << "The difference between " << float1 << " and " << float2 << " is: "
                << float_subtract(float1, float2) << "\n" << std::endl;  // Output the difference of the two floats
    
    std::cout << "The product of " << num1 << " and " << num2 << " is: "
              << int_multiply(num1, num2) << "\n" << std::endl;  // Output the product of the two numbers

    std::cout << "The product of " << float1 << " and " << float2 << " is: "
              << float_multiply(float1, float2) << "\n" << std::endl;  // Output the product of the two floats

    std::cout << "The integer quotient of " << num1 << " and " << num2 << " is: "
              << int_divide(num1, num2) << "\n" << std::endl;  // Output the quotient of the two numbers

    std::cout << "The float quotient of " << float1 << " and " << float2 << " is: "
              << float_divide(float1, float2) << "\n" << std::endl;  // Output the quotient of the two floats

    std::cout << "The modulus of " << num1 << " and " << num2 << " is: "
              << modulus(num1, num2) << "\n" << std::endl;  // Output the modulus of the two numbers

    std::cout << "The modulus of " << float1 << " and " << float2 << " is: "
              << modulus(float1, float2) << "\n" << std::endl;  // Output the modulus of the two floats

    exit_sequence();  // Call function to print goodbye message
    
    return 0;  // Indicate that the program ended successfully
}  // End of main function