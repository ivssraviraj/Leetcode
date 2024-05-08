class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0;
        for(int i=0;i<32;i++){
            
            if(n&1){
                ans |= 1;
            }
            if(i<31){
            n = n>>1;
            ans = ans<<1;}
            // cout<<n<< " ";
        }
        return ans;
    }
};