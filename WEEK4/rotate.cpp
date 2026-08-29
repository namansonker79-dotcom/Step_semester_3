#include <iostream>
using namespace std;

int* rotateArray(int nums[], int n, int k) {
    static int result[100];

    k = k % n;

    for (int i = 0; i < n; i++) {
        int newIndex = (i + k) % n;
        result[newIndex] = nums[i];
    }

    return result;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    int* result = rotateArray(nums, n, k);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}