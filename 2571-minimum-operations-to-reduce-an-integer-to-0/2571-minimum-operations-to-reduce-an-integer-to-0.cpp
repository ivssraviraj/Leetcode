class Solution {
public:
    
    
    
    int minOperations(int n) {
        // string bits = getBinary(n);
        int i=0, count=0;
        while(n>0 && i<32)
        {
                        
            if(__builtin_popcount(n) > __builtin_popcount(n + (1<<i)))
            {
                n += 1<<i;
                count++;
            }
            i++;
        }
        
        return count + __builtin_popcount(n);
        
    }
};