class Solution {
public:
    vector<string> getSS(string &s){
        
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss >> word){
            // cout<<word;
            words.push_back(word);
        }
        return words;
    }
    
    bool wordPattern(string pattern, string s) {
        map<char, string> m;
        vector<string> words = getSS(s);
        unordered_set<string> us;
        if(words.size() != pattern.length()) return false;
        for(int i=0; i<pattern.length(); i++){
            char s1 = pattern[i];
            cout<<s1<<" "<<words.size()<<endl;
            if(m.find(s1) == m.end() && us.find(words[i]) == us.end()){
                m[s1] = words[i];
                us.insert(words[i]);
            }else{
                if(words[i] != m[s1]) 
                    return false;
            }
        }
        return true;
    }
};