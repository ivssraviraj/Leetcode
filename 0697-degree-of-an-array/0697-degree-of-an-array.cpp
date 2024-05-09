class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, pair<int, int>> m;
        map<int, int> freq;
        int maxFreq = 0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            
            freq[nums[i]]++;
            if(m.find(nums[i]) == m.end())
            {
                m[nums[i]].first = i;
            }
            m[nums[i]].second = i;
            // cout<<m[nums[i]].first<<" "<<m[nums[i]].second<<endl;
            if(freq[nums[i]] == maxFreq){
                mini = min(m[nums[i]].second - m[nums[i]].first + 1, mini);
            }else if(freq[nums[i]] > maxFreq) {
                mini = m[nums[i]].second - m[nums[i]].first + 1;
            }
            maxFreq = max(freq[nums[i]], maxFreq);
            // cout<<maxFreq<<" ";
        }
        return mini;
    }
};