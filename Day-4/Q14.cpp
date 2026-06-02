//Write a program to Find nth Fibonacci term. 
#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next, i;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1) {
        cout << "Nth Fibonacci term is: " << first;
    }
    else if (n == 2) {
        cout << "Nth Fibonacci term is: " << second;
    }
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        cout << "Nth Fibonacci term is: " << next;
    }

    return 0;
}