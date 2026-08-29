#include <iostream>
using namespace std;

int* mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    static int result[100];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }

        k++;
    }

    while (i < n1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    return result;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = 3;
    int n2 = 3;

    int* result = mergeSortedArrays(arr1, n1, arr2, n2);

    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}