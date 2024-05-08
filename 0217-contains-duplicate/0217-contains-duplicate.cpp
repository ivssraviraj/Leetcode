class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        
        for(int n : nums){
            if(m[n] > 0) return true;
            
            m[n]++;
        }
        return false;
    }
};