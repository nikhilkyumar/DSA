class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);
        int pindex=0;
        int nindex=1;
        for(int i =0; i < n;i++){
            if(nums[i]<0){
                a[nindex]=nums[i];
                nindex+=2;
            }
            else {
                a[pindex]=nums[i];
                pindex+=2;
            }
        }
    return a;
    }
};