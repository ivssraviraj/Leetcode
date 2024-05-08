class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> idx;
        for(int i =0;i< nums.size(); i++) idx[nums[i]] = i;
        
        for(int i  = 0; i < nums.size(); i++) if(idx[target - nums[i]] > 0 && i != idx[target - nums[i]]) return {i, idx[target - nums[i]]};
        
        return {};
    }
};