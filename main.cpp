#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two integers
// Returns a double to handle fractional results
// If division by zero is attempted, an error message is printed and 0 is returned
double divide(int a, int b) {
    if (b == 0) {
        std::cout << "Error! Division by zero is Undefined.";
        return 0;
    }
    else {
        return (double)a / b;
    }
}

// Main Function
int main(){
    int  num1, num2; // variable that hold the two input numbers
    char operation; // variable to hold the operation


    // Asking user for the first number.
    std::cout << "Enter First number:";
    // taking input from the user
    std::cin >> num1;

    // User Deciding Operation to perform
    std::cout << "Enter Operation  (+, -, *, /):";
    // taking input from the user
    std::cin >> operation;

    // Asking user for the Second number.
    std::cout << "Enter Second number:";
    // taking input from the user
    std::cin >> num2;

  //using If/else statement to perform operation
    if (operation == '+')
      std::cout << "Result " << num1 << operation << num2 <<  " = "   << add(num1, num2);
    if (operation == '-')
        std::cout << "Result " << num1 << operation << num2 <<  " = "   << subtract(num1, num2);
     if (operation == '*')
        std::cout << "Result " << num1 << operation << num2 <<  " = "   << multiply(num1, num2);
    if (operation == '/')
        std::cout <<"Result " << num1 << operation << num2 <<  " = "   << divide(num1, num2);
    return 0;
}