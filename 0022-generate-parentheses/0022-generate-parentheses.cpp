class Solution {
private:
    void recurse(vector<string>& output, string s, int open, int close, int n){
        if(open==n and close==n){
            output.push_back(s);
            return;
        }
        if(open<n)
            recurse(output, s+"(" , open+1, close, n);
        if(close<open)
            recurse(output, s+")", open, close+1, n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        recurse(output, "", 0, 0, n);
        return output;
    }
};