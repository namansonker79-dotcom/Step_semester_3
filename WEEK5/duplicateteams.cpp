#include <iostream>
#include <string>
using namespace std;

string findDuplicateTeam(string teamNames[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (teamNames[i] == teamNames[j]) {
                return "Duplicate Found: " + teamNames[i];
            }
        }
    }

    return "No Duplicates Found";
}

int main() {
    string teamNames[] = {
        "ByteForce",
        "CodeCrafters",
        "ByteForce"
    };

    int size = 3;

    cout << findDuplicateTeam(teamNames, size);

    return 0;
}