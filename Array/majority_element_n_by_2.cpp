#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 1. Brute Force Approach - Time: O(n^2), Space: O(1)
int majorityElementBruteForce(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            return nums[i];
        }
    }
    return -1;
}

// 2. Hash Map Approach - Time: O(n), Space: O(n)
int majorityElementHashMap(vector<int>& nums) {
    unordered_map<int, int> freq;
    int n = nums.size();
    for (int num : nums) {
        freq[num]++;
        if (freq[num] > n / 2) {
            return num;
        }
    }
    return -1;
}

// 3. Sorting Approach - Time: O(n log n), Space: O(1)
int majorityElementSorting(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];  // Since majority element is guaranteed to exist
}

// 4. Moore's Voting Algorithm - Time: O(n), Space: O(1)
int majorityElementMooreVoting(vector<int>& nums) {
    int count = 0;
    int candidate = -1;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate; // No need to verify as problem guarantees majority exists
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Brute Force: " << majorityElementBruteForce(nums) << endl;
    cout << "Hash Map: " << majorityElementHashMap(nums) << endl;
    cout << "Sorting: " << majorityElementSorting(nums) << endl;
    cout << "Moore's Voting: " << majorityElementMooreVoting(nums) << endl;

    return 0;
}
