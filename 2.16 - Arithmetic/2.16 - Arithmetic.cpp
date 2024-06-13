//2.16 Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>
using namespace std;

int main()
{
    //Decleares variables
    double num1;
    double num2;
    
    //Collects values from users
    cout << "User Values:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    //Prints artithmetics
    cout << "\nArithmetic Values:" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Number 1 - Number 2: " << num1 - num2 << endl;
    cout << "Number 2 - Number 1: " << num2 - num1 << endl;
    cout << "Number 1 / Number 2: " << num1 / num2 << endl;
    cout << "Number 2 / Number 1: " << num2 / num1 << endl;

    //Indicator that the program ran correctly
    return 0;
}