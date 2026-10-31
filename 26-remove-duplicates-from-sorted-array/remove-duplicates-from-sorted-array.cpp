class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int unique=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=nums[unique-1]){
                nums[unique]=nums[i];
                unique++;
            }
            
        }
        return unique;
    }
};