#include <iostream>
#include <string>
using namespace std;

double rowAverage(int row[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += row[i];
    }

    return sum / size;
}

string classifyRows(int seatingScores[][3], int rows, int threshold) {
    string result = "";

    for (int i = 0; i < rows; i++) {
        double average = rowAverage(seatingScores[i], 3);

        result += "Row " + to_string(i) + ": ";

        if (average < threshold) {
            result += "Quiet Zone";
        } else {
            result += "Buzzing Zone";
        }

        if (i < rows - 1) {
            result += " | ";
        }
    }

    return result;
}

int main() {
    int seatingScores[3][3] = {
        {40, 50, 45},
        {85, 90, 95},
        {30, 20, 25}
    };

    int threshold = 60;

    cout << classifyRows(seatingScores, 3, threshold);

    return 0;
}