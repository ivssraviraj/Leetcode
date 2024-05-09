class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0, ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6 == 0) {
                count++;
                ans+=nums[i];
            }
        }
        return count?ans/count:0;
        
    }
};