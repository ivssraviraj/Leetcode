class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = *max_element(begin(nums), end(nums));
    return k * maxi + k * (k - 1) / 2; 
        
    }
};