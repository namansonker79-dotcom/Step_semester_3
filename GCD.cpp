#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "The GCD is: " << a << endl;

    return 0;
}