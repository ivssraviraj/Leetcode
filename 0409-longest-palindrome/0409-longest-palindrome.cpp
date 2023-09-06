class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> map(52);
        
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'a') map[s[i] - 'a']++;
            else map[s[i] - 'A' + 26]++;
        }
        bool flag = false;
        int ans = 0;
        for(int i = 0; i < 52; i++){
            if(map[i] > 0){
                if(map[i]%2 == 1){
                    flag = true;
                    map[i] -=1;
                }
                
                ans += map[i];
            }
        }
        return flag?ans+1:ans;
    }
};