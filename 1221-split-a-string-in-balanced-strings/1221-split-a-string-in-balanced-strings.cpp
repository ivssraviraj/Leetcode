class Solution {
public:
    int balancedStringSplit(string s) {
        int flag = s[0] == 'R'?1:-1;
        int count =0;
        for(int i=1;i<s.length();i++){
            if(s[i] == 'L'){
                flag--;
            }else{
                flag ++;
            }
            
            if(flag ==0) count++;
        }
        return count;
    }
};