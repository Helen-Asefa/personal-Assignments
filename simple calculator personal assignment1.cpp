#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    char ch;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: "; 
    cin >> num2;
    cout << "What do you want to do( + , - , * , /):";
    cin >> ch;
    
    if (ch == '+')
        cout << "Addition = " << num1 + num2 << endl;
    else if (ch == '-')
        cout << "Subtraction = " << num1 - num2 << endl;
    else if (ch == '*')
        cout << "Multiplication = " << num1 * num2 << endl;
    else if (ch == '/')
    {
        if (num2 != 0) 
            cout << "Division " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero" << endl;
    }
    else
        cout << "Invalid format." << endl;

    return 0;
}
