class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int, int> m;
        
        for(char c : text)
        {
            m[c-'a']++;
        }
        
        set<int> s = {m[1], m[0], m['l'-'a']/2, m['o'-'a']/2, m['n'-'a']};
        return *s.begin();
        
    }
};