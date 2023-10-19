class Solution {
public:
    // A B C E
    // S F E S
    // A D E E
    
    bool dfs(vector<vector<char>>& board, string &word, int wi, int i, int j, int m, int n, auto &isVisited){
        int x=i, y=j;
        if(wi == word.length()) return true;
        if(x<0 || x>=m || y<0 || y>=n || isVisited[x][y]==1) return false;
        if(word[wi] != board[x][y]) return false;
        isVisited[x][y]=1;
        bool f = ( dfs(board, word, wi+1, i+1, j, m, n, isVisited) | 
                 dfs(board, word, wi+1, i, j+1, m, n, isVisited) | 
                 dfs(board, word, wi+1, i-1, j, m, n, isVisited) | 
                 dfs(board, word, wi+1, i, j-1, m, n, isVisited));
        isVisited[x][y] = 0;
        return f;    
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++){
                vector<vector<int>> isVisited(m, vector<int>(n, 0));
                if(board[i][j]== word[0] && dfs(board, word, 0, i, j, m, n, isVisited))
                    return true;
            }
        }
        
        return false;
        
    }
};