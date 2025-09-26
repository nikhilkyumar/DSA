class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int curr_index= -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                curr_index=i;
                break;
            }
        }
        if(curr_index!=-1){
            for(int i=n-1;i>=curr_index;i--){
                if(nums[i]>nums[curr_index]){
                    swap(nums[curr_index],nums[i]);
                    break;
                }
            }   
        }
        reverse(nums.begin()+curr_index+1,nums.end());
    }
};