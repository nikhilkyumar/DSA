class Solution {
    private:
    void createpar(int open,int close,int n,string res,vector<string>& val){

        if(res.length()==2*n){
            val.push_back(res);
            return;
        }
        if(open<n){
            createpar(open+1,close,n,res+'(',val);
        }
        if(close<open){
            createpar(open,close+1,n,res+')',val);
        }



    }
public:
    vector<string> generateParenthesis(int n) {
      vector<string> val;
       createpar(0,0,n,"",val);
       return val;

        
    }
};