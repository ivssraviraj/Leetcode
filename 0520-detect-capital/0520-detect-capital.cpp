class Solution {
public:
    bool detectCapitalUse(string word) {
        int count =0;
        for(int i=0;i<word.size();i++){
            if(word[i] <'a') count++;
        }
        
        return (count ==0) || (count==1 &&word[0] <'a') || count == word.size();
    }
};