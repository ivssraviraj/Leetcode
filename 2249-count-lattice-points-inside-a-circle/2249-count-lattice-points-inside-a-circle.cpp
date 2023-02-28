class Solution {
public:
    void countPoints(set<pair<int, int>> &s, vector<int> circle)
    {
        int x = circle[0], y= circle[1], r = circle[2];
        for(int i = x-r ; i<= x+r;i++ )
        {
            for(int j=y-r; j<=y+r; j++)
            {
                if((i-x)*(i-x) + (j-y)*(j-y) <=r*r)
                {
                    s.insert(make_pair(i,j));
                    // cout<<i<<" "<<j<<" ";
                }
            }

        }
        
    }
    
    
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int, int>> s;
        
        for(auto circle : circles)
        {
            countPoints(s, circle);
        }
        return s.size();
    }
};