#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size = 5;
    int array[size] = {1, 2, 3, -4, 5};

    int maxSubarraySum = INT_MIN;
    int currentSubarraySum = 0;

    for (int i = 0; i < size; i++) {
        currentSubarraySum += array[i];
        maxSubarraySum = max(currentSubarraySum, maxSubarraySum);

        if (currentSubarraySum < 0)
            currentSubarraySum = 0;
    }

    cout << "Maximum subarray sum = " << maxSubarraySum << endl;
    return 0;
}

