class Solution {
   private:
   void backtrack(int start,string digits,string curr,vector<string>& ans,string mapping[]){
    if(digits.size()==start){
        ans.push_back(curr);
        return;
    }
    int num=digits[start]-'0';
    string val =mapping[num];
    for(int i=0;i<val.size();i++){
        curr.push_back(val[i]);
        backtrack(start+1,digits,curr,ans,mapping);
        curr.pop_back();
    }


   } 
public:
    vector<string> letterCombinations(string digits) {
        string curr;
        vector<string> ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backtrack(0,digits,curr,ans,mapping);
        return ans;


        
    }
};