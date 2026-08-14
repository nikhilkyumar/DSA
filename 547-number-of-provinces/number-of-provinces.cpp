class Solution {
private:
  void dfs(int n,vector<vector<int>>& isConnected, vector<int> &vis){
     vis[n]=1;
     for(int i=0;i<isConnected.size();i++){
        if(isConnected[n][i]!=0&&vis[i]==0){
            dfs(i,isConnected,vis);
        }
     }

  }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       int n=isConnected.size();
       int cnt=0;
       vector<int> vis(n,0);
       for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(i,isConnected,vis);
            cnt++;
        }
       }
       return cnt;
    }
};