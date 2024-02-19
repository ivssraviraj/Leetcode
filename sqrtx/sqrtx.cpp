class Solution {
public:
    int mySqrt(int x) {
        
        long l=0, r=x, mid;
        int res = -1;
        
        while(l<=r){
            
            mid = l + (r-l)/2;
            
            if(mid*mid <= x){
                
                l = mid + 1;
                res = mid;
            }
            else if(mid*mid > x) {
                
                r = mid -1;
            }
            
           
        }
        return res;
    }
};