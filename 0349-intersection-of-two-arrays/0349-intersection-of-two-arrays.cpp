class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> ans;
        for(int n2 : nums2) if(s.find(n2) != s.end()) ans.insert(n2);
        
        return vector<int>(ans.begin(), ans.end());
        
    }
};