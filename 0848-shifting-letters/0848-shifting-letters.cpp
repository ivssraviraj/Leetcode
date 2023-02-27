class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int sum=0;
        vector<int> nums(s.length(), 0);
        for(int i=s.length()-1;i > -1;i--)
        {
            sum += shifts[i]%26;
            nums[i] = sum;
        }

        sum%=26;
        for(int i=0; i<s.length(); i++)
        {
            s[i] = 'a' + (nums[i] + s[i] - 'a')%26;

        }
        return s;
    }
};