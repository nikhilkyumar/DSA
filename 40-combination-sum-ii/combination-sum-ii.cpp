class Solution {
private:
 void backtrack(vector<int>& candidates, int target,vector<vector<int>>& res,vector<int>& curr,int i){
    if(target==0){
      res.push_back(curr);
        return;
    }
    if(i>=candidates.size()|| target < 0){
       return;
    }
    curr.push_back(candidates[i]);
    backtrack(candidates,target-candidates[i],res,curr,i+1);
    curr.pop_back();
    while(i+1<candidates.size()&&candidates[i]==candidates[i+1]) i++;
    backtrack(candidates, target, res, curr, i + 1);
 }    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates,target,res,curr,0);
        return res;

        
    }
};