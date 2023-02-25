class Solution {
public:

    void dfs( int i, int j, vector<vector<char>>& grid, vector<vector<int>> &isVisited)
    {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0' || isVisited[i][j] == 1) {
            return;
        }
        
        isVisited[i][j] = 1;

        dfs(i+1, j, grid, isVisited);
        dfs(i-1, j, grid, isVisited);
        dfs(i, j+1, grid, isVisited);
        dfs(i, j-1, grid, isVisited);


    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> isVisited(grid.size(), vector<int>( grid[0].size(), 0));
        int count =0;
        for(int i=0;i<grid.size(); i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == '1' && isVisited[i][j] == 0)
                {
                    dfs(i, j, grid, isVisited);
                    count++;
                }
            }
        }
        return count;
    }
};