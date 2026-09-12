#include <iostream>
#include <string>
using namespace std;

string maskPhoneNumber(string phone) {

    if (phone.length() != 10) {
        return "Invalid phone number";
    }

    // Check that every character is a digit
    for (int i = 0; i < phone.length(); i++) {
        if (phone[i] < '0' || phone[i] > '9') {
            return "Invalid phone number";
        }
    }

    string lastFour = phone.substr(6, 4);

    string result = "XXXXXX";

    result.insert(6, "-");

    result += lastFour;

    return result;
}

int main() {
    string phone;

    cout << "Enter phone number: ";
    cin >> phone;

    cout << maskPhoneNumber(phone) << endl;

    return 0;
}