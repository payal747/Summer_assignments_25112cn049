//Write a program to Find product of digits.
#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;          // Get last digit
        product = product * digit; // Multiply digits
        num = num / 10;            // Remove last digit
    }

    cout << "Product of digits = " << product;

    return 0;
}