class Solution {
    
    
public:
    static bool comp(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> numss;
        for(int i : nums){
            numss.push_back(to_string(i));
        }
        sort(numss.begin(), numss.end(), comp);
        string ans="";
        for(string s : numss) ans += s;
        return ans[0]=='0'? "0" : ans;
    }
};