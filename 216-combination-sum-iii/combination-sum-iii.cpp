class Solution {
    void backtrack(int start,int k,int n,int sum,vector<int>& curr,vector<vector<int>>& ans){
        if(sum==n&&k==0){
            ans.push_back(curr);
            return;
        }
        if(sum>n)return;
        if (k<0) return;
        for(int i=start;i<10;i++){
            curr.push_back(i);
            backtrack(i+1,k-1,n,sum+i,curr,ans);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        vector<vector<int>> ans;
        backtrack(1,k,n,0,curr,ans);
        return ans;
    }
};