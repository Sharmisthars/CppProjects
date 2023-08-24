#include<iostream>
using namespace std;

int menu() {
    int ch;
    cout << "1. ADDITION" << '\n';
    cout << "2. MULTIPLICATION" << '\n';
    cout << "3. SUBTRACTION" << '\n';
    cout << "4. DIVISION" << '\n';
    cout << "Enter your choice: ";
    cin >> ch;
    return ch;
}

int main() {
    int a, b;
    int ch = menu();

    switch(ch) {
        case 1: {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Addition: " << a + b << endl;
            break;
        }
        case 2: {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Multiplication: " << a * b << endl;
            break;
        }
        case 3: {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Subtraction: " << a - b << endl;
            break;
        }
        case 4: {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0) {
                cout << "Division: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        }
        default:
            cout << "Enter Correct Choice" << endl;
            break;
    }
    return 0;
}
