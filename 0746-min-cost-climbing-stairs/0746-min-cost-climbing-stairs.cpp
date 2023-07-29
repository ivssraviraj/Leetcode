class Solution {
public:
    
    int minCost(vector<int>& cost, int n, vector<int>& dp){
        
        if(n==0){
            return cost[0];
        }
        if(n<0) return 0;
        
        if(dp[n] !=-1) return dp[n];
        
        return dp[n] = min(minCost(cost, n-1, dp) , minCost(cost, n-2, dp)) + cost[n];
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp(cost.size() + 1, -1);
        
        return min(minCost(cost, cost.size()-1, dp ), minCost(cost, cost.size()-2, dp));
        
    }
};