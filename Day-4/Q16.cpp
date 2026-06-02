//Write a program to Print Armstrong number in a range.
#include <iostream>
using namespace std;

int main() {
    int start, end, num, originalNum, remainder, result;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (num = start; num <= end; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}