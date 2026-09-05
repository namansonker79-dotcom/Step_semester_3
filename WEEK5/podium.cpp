#include <iostream>
using namespace std;

int* findTopThreeScores(int scores[], int size) {
    static int result[3];

    int first = -1;
    int second = -1;
    int third = -1;

    for (int i = 0; i < size; i++) {
        int score = scores[i];

        if (score >= first) {
            third = second;
            second = first;
            first = score;
        }
        else if (score >= second) {
            third = second;
            second = score;
        }
        else if (score >= third) {
            third = score;
        }
    }

    result[0] = first;
    result[1] = second;
    result[2] = third;

    return result;
}

int main() {
    int scores[] = {45, 82, 79, 90, 33, 90, 61};
    int size = 7;

    int* result = findTopThreeScores(scores, size);

    cout << "[" << result[0] << ", "
         << result[1] << ", "
         << result[2] << "]";

    return 0;
}