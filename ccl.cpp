#include <iostream>
#include <limits>

using namespace std;

// Function to clear the input stream in case of an error
void clearInput() {
    cin.clear(); // clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
}

// Function to display the calculator menu with colored text
void displayMenu() {
    cout << "\033[1;39m" << "MADE BY    " << endl;
    cout << "\033[1;39m" << "        ⤡ " << endl;
    cout << "\033[1;39m" << "          \033[1;36m GET UNKNOWN ERROR "<<"\033[1;33m" << "v2.7" << endl;
    
    cout << "\033[1;31m" << "===========================" << endl;
    cout << "\033[1;32m" << " Advanced Calculator" << endl;
    cout << "\033[1;31m" << "===========================" << endl;
    cout << "\033[0m"; // Reset color
    cout << "\033[1;36m" << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Exit" << "\033[0m" << endl;
    cout << "\033[1;33m" << "Enter your choice: " << "\033[0m";
}

// Function to get two numbers from the user
bool getTwoNumbers(double &num1, double &num2) {
    cout << "Enter First Number: ";
    if (!(cin >> num1)) {
        cout << "\033[1;31m" << "Invalid input. Please enter numeric values." << "\033[0m" << endl;
        clearInput();
        return false;
    }
    cout << "Enter Second Number: ";
    if (!(cin >> num2)) {
        cout << "\033[1;31m" << "Invalid input. Please enter numeric values." << "\033[0m" << endl;
        clearInput();
        return false;
    }
    return true;
}

int main() {
    int choice;
    double num1, num2, result;
    bool keepRunning = true;

    while (keepRunning) {
        displayMenu();
        cin >> choice;

        if (cin.fail()) {
            cout << "\033[1;31m" << "**Unknown error occurred!** Please enter valid choice." << "\033[0m" << endl;
            clearInput();
            continue;
        }

        switch (choice) {
            case 1: // Addition
                if (getTwoNumbers(num1, num2)) {
                    result = num1 + num2;
                    cout << "\033[1;32m" << "Result: " << result << "\033[0m" << endl;
                }
                break;
            case 2: // Subtraction
                if (getTwoNumbers(num1, num2)) {
                    result = num1 - num2;
                    cout << "\033[1;32m" << "Result: " << result << "\033[0m" << endl;
                }
                break;
            case 3: // Multiplication
                if (getTwoNumbers(num1, num2)) {
                    result = num1 * num2;
                    cout << "\033[1;32m" << "Result: " << result << "\033[0m" << endl;
                }
                break;
            case 4: // Division
                if (getTwoNumbers(num1, num2)) {
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "\033[1;32m" << "Result: " << result << "\033[0m" << endl;
                    } else {
                        cout << "\033[1;31m" << "Error: Division by zero!" << "\033[0m" << endl;
                    }
                }
                break;
            case 5: // Modulus
                cout << "Enter First Number: ";
                int int1, int2;
                if (cin >> int1) {
                    cout << "Enter Second Number: ";
                    if (cin >> int2) {
                        if (int2 != 0) {
                            result = int1 % int2;
                            cout << "\033[1;32m" << "Result: " << result << "\033[0m" << endl;
                        } else {
                            cout << "\033[1;31m" << "Error: Division by zero!" << "\033[0m" << endl;
                        }
                    } else {
                        cout << "\033[1;31m" << "Invalid input. Please enter integer values." << "\033[0m" << endl;
                        clearInput();
                    }
                } else {
                    cout << "\033[1;31m" << "Invalid input. Please enter integer values." << "\033[0m" << endl;
                    clearInput();
                }
                break;
            case 6: // Exit
                keepRunning = false;
                break;
            default:
                cout << "\033[1;31m" << "**Unknown error occurred!**" << "\033[0m" << endl;
                break;
        }
    }

    return 0;
