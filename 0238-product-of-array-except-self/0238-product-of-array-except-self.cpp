class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long int product = 1;
        vector<int> ans(nums.size(), 0);
        int idx=0, zc=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                if(zc) return ans;
                zc++;
                idx = i;
            }else{
                product *= nums[i];
            }
        }
        
        if(zc)
        {
            ans[idx] = product;
            return ans;
        }
        else
            for(int i=0;i<nums.size();i++){
                ans[i] = product/nums[i];
            }
        return ans;
        
    }
};