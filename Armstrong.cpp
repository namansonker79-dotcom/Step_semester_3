#include <iostream>
using namespace std;

int main() {
    int number, origNumber, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    origNumber = number;

    while (number != 0) {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if (sum == origNumber)
        cout << origNumber << " is an Armstrong number.";
    else
        cout << origNumber << " is not an Armstrong number.";

    return 0;
}