class Solution {
public:
    // Function to find the first occurrence of the target
    int firstOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1;  // Initialize first to -1 (not found)

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;  // Found target, store index
                high = mid - 1; // Continue searching left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return first;
    }

    // Function to find the second (last) occurrence of the target
    int secondOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int second = -1;  // Initialize second to -1 (not found)

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                second = mid;  // Found target, store index
                low = mid + 1;  // Continue searching right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return second;
    }

    // Main function to return the range of the target in the array
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        int second = secondOccurrence(nums, target);

        return {first, second};
    }
};
