class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] > target) {
                j--;
                continue;
            }
            if (nums[i] + nums[j] < target) {
                i++;
                continue;
            }
            if (nums[i] + nums[j] == target) {
                return {i + 1, j + 1};
            }
        }
        return {};
    }
};
