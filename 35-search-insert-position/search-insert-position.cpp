class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        
       while(high>low){
        int mid=low+(high-low) /2;
        if(target>nums[mid]){
            low=mid+1;}
        else{
            high=mid;
        }
       }
       return low;
    }
};