#include <iostream>
#include <string>
using namespace std;

void countVowelsAndConsonants(string text) {
    int vowels = 0;
    int consonants = 0;

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            vowels++;
        }
        else if (ch != ' ') {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels
         << " | Consonants: " << consonants << endl;
}

int main() {
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    countVowelsAndConsonants(text);

    return 0;
}