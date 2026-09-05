#include <iostream>
using namespace std;

void curveScores(int scores[], int size, int bonus) {
    for (int i = 0; i < size; i++) {
        scores[i] += bonus;
    }
}

int main() {
    int scores[] = {70, 85, 60};
    int size = 3;

    curveScores(scores, size, 10);

    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << scores[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]";

    return 0;
}