class Solution {
private:
 void backtrack(vector<int> candidates,int target,int sum,vector<vector<int>>& res,    vector<int>& curr,int i){
    if(i==candidates.size()){

      if(target==sum){
        res.push_back(curr);}

        return;
    }

    if(sum<=target){
        curr.push_back(candidates[i]);
        backtrack(candidates,target,sum+candidates[i],res,curr,i);
        curr.pop_back();
    }
    backtrack(candidates,target,sum,res,curr,i+1);
    


}    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates,target,0,res,curr,0);
        return res;
        
    }
};