class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> maxHeap;
        
        for(int i=0; i<nums.size() ;i++){
            if(i<k)
            maxHeap.push(nums[i]);
            else{
                if(maxHeap.top() < nums[i]){
                    maxHeap.pop();
                    maxHeap.push(nums[i]);
                }
            }
        }
        
        return maxHeap.top();
    }
    
    
};