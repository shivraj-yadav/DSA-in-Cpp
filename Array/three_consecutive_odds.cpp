#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // Return false if array has fewer than 3 elements
        if (arr.size() < 3) return false;

        // Check each group of 3 consecutive elements
        for (int i = 0; i <= arr.size() - 3; i++) {
            if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 6, 4, 1, 3, 5};  // Example input

    if (sol.threeConsecutiveOdds(arr)) {
        cout << "True: The array has three consecutive odd numbers." << endl;
    } else {
        cout << "False: The array does not have three consecutive odd numbers." << endl;
    }

    return 0;
}
