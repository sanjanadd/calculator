#include <iostream>
using namespace std;

// Addition
int add(int a, int b) {
    return a + b;
}

// Subtraction
int subtract(int a, int b) {
    return a - b;
}

// Multiplication
int multiply(int a, int b) {
    return a * b;
}

// Division 
int divide(int a, int b) {
    if (b != 0) 
        return a / b;
    else {
        cout << "Error! Cannot divide by zero." << endl;
        return 0;
    }
}

// Modulo 
int modulo(int a, int b) {
    if (b != 0) 
        return a % b;
    else {
        cout << "Error! Cannot perform modulo by zero." << endl;
        return 0;
    }
}

int main() {
    int option, a, b;

    while (true) {
        // Displaying the menu
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;

        // Prompting user to select an option
        cout << "Choose an option: ";
        cin >> option;

        // Exiting if user selects option 6
        if (option == 6) {
            cout << "Exiting program..." << endl;
            break;
        }

        // Prompting user for two numbers
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        // Performing selected operation
        switch (option) {
            case 1:
                cout << "Result: " << add(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(a, b) << endl;
                break;
            case 4:
                cout << "Result: " << divide(a, b) << endl;
                break;
            case 5:
                cout << "Result: " << modulo(a, b) << endl;
                break;
            default:
                cout << "Invalid option! Please select a valid option." << endl;
                break;
        }
    }

    return 0;
}