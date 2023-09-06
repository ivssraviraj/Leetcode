class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        for(int i=sqrt(area);i>0;i--){
            if((area % i) == 0  ) return {max( area/i, i), min(i, area/i)};
        }
        return {};
    }
};