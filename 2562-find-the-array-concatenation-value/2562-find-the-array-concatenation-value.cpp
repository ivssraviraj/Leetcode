class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        int n = nums.size();
        
        long long ans = 0;
        for(int i=0;i<n/2 ;i++){
            int a = i, b = n - i -1;
            if(a != b) ans += stoi(to_string(nums[a]) + to_string(nums[b]));
            else ans += nums[a];
            cout<<ans<<" ";
        }
        if(n%2==1) ans += nums[n/2]; 
        return ans;
        
    }
};