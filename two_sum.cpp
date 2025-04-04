class Solution {
public:

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Stores value -> index mapping
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return the two indices
        }
        numMap[nums[i]] = i; // Store the value with its index
    }
    return {}; // Should never reach here as per problem statement
}

};
