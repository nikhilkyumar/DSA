class Solution {
private:
void backtrack(int i,vector<int>& nums,vector<int>& curr,vector<vector<int>>& ans){
    ans.push_back(curr);
    for(int j=i;j<nums.size();j++){
        curr.push_back(nums[j]);
        backtrack(j+1,nums,curr,ans);
        curr.pop_back();
    }
   

}    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        backtrack(0,nums,curr,ans);
        return ans;
       
        
    }
};