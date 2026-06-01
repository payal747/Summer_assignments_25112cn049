//Write a program to Check whether a number is palindrome.
#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;                 // Get last digit
        reverse = reverse * 10 + digit;  // Reverse the number
        num = num / 10;                  // Remove last digit
    }

    if (original == reverse)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";

    return 0;
}