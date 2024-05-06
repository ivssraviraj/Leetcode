class Solution {
public:
    int f(vector<int> &dp, vector<int> nums, int idx){
        if(idx == 0) return nums[0];
        if(idx == 1) return max(nums[0], nums[1]);
        
        if(dp[idx]==-1)
            dp[idx] = max(f(dp, nums, idx-1), f(dp, nums, idx-2) + nums[idx]);
        
        return dp[idx];
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return f(dp, nums, nums.size()-1); 
    }
};