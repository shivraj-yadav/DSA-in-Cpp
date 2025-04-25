#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 1. Brute Force Approach - O(n^2), O(1)
vector<int> majorityElementBruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) count++;
        }
        if (count > n / 3 && find(result.begin(), result.end(), nums[i]) == result.end()) {
            result.push_back(nums[i]);
        }
    }
    return result;
}

// 2. Better Approach (Hash Map) - O(n), O(n)
vector<int> majorityElementHashMap(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;
    vector<int> result;

    for (int num : nums) {
        freq[num]++;
    }

    for (auto it : freq) {
        if (it.second > n / 3) {
            result.push_back(it.first);
        }
    }

    return result;
}

// 3. Optimal Approach (Extended Moore’s Voting Algorithm) - O(n), O(1)
vector<int> majorityElementMooreVoting(vector<int>& nums) {
    int n = nums.size();
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0;

    // First pass: find candidates
    for (int num : nums) {
        if (num == num1) count1++;
        else if (num == num2) count2++;
        else if (count1 == 0) {
            num1 = num;
            count1 = 1;
        }
        else if (count2 == 0) {
            num2 = num;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    // Second pass: confirm candidates
    count1 = 0; count2 = 0;
    for (int num : nums) {
        if (num == num1) count1++;
        else if (num == num2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(num1);
    if (count2 > n / 3) result.push_back(num2);

    return result;
}

// Utility to print the result
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {3, 2, 3};

    cout << "Brute Force: ";
    printVector(majorityElementBruteForce(nums));

    cout << "Hash Map: ";
    printVector(majorityElementHashMap(nums));

    cout << "Moore’s Voting Algorithm: ";
    printVector(majorityElementMooreVoting(nums));

    return 0;
}
