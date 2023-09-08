class Solution {
public:
    bool judgeCircle(string moves) {
        map<char, int> m;
        
        for(int i=0;i<moves.size();i++){
            m[moves[i]]++;
        }
        
        return m['U'] - m['D'] == 0 && m['L'] - m['R'] == 0;
    }
};