//Write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next, i;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (i = 1; i <= n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}