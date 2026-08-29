#include <iostream>
using namespace std;

int* twoSum(int nums[], int n, int target) {
    static int result[2];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    int* result = twoSum(nums, n, target);

    cout << "[" << result[0] << ", " << result[1] << "]";

    return 0;
}