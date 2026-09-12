#include <iostream>
#include <string>
using namespace std;

string validateFileExtension(string filename) {

    int dotPosition = filename.rfind('.');

    if (dotPosition == string::npos) {
        return "Rejected — invalid file type";
    }

    string extension = filename.substr(dotPosition + 1);

    // Convert extension to lowercase
    for (int i = 0; i < extension.length(); i++) {
        if (extension[i] >= 'A' && extension[i] <= 'Z') {
            extension[i] = extension[i] + 32;
        }
    }

    if (extension == "pdf" ||
        extension == "docx" ||
        extension == "zip") {

        return "Accepted";
    }

    return "Rejected — invalid file type";
}

int main() {
    string filename;

    cout << "Enter filename: ";
    cin >> filename;

    cout << validateFileExtension(filename) << endl;

    return 0;
}