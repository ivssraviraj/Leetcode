class Solution {
public:
    
    void subs(vector<int> &nums, int index, set<multiset<int>> &subsets, multiset<int> curset )
    {
        if(index == nums.size())
        {
            subsets.insert(curset);
            return;
        }
        
        subs(nums, index+1, subsets, curset);
        
        curset.insert(nums[index]);
        subs(nums, index+1, subsets, curset);
        curset.erase(nums[index]);
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<multiset<int>> subsets;
        multiset<int> curset;
        subs(nums,0,subsets, curset);
        vector<vector<int>> ans;
        for(auto i : subsets)
        {
            vector<int> subset;
            for(auto j : i)
                subset.push_back(j);
            ans.push_back(subset);
        }
        return ans;
    }
};