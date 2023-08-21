class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==1){
                a++;
            }else{
                b=a;
                a=0;
            }
            c=max(c,b+a);
        }
        
        return c==nums.size()?nums.size()-1:c;
    }
};