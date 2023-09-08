class Solution {
public:
//     vector<string> getWords(string s){
        
//         vector<string> ans;
        
//         string word;
//         stringstream ss(s);
        
//         while(ss >> word){
//             ans.push_back(word);
//         }
        
//         return ans;
//     }
//     string reverseWords(string s) {
        
//         vector<string > res = getWords(s);
        
//         for(int i=0;i<res.size();i++){
//             string ss = res[i];
//             reverse(ss.begin(), ss.end());
//             res[i] = ss;
            
//         }
        
//         string ans;
        
//         for(string ss : res){
//             ans += ss;
//             ans += " ";
//         }
//         ans.pop_back();
//         return ans;
        
//     }
    string reverseWords(string s) {
        int lastSpaceIndex = -1;
        int len = (int)s.size();
        for (int strIndex = 0; strIndex <= len; strIndex++) {
            if (strIndex == len || s[strIndex] == ' ') {
                int startIndex = lastSpaceIndex + 1;
                int endIndex = strIndex - 1;
                while (startIndex < endIndex) {
                    char temp = s[startIndex];
                    s[startIndex] = s[endIndex];
                    s[endIndex] = temp;
                    startIndex++;
                    endIndex--;
                }
                lastSpaceIndex = strIndex;
            }
        }
        return s;
    }
};