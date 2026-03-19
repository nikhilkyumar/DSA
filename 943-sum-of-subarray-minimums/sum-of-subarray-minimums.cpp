class Solution {
public:
    vector<int> findnse(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&arr[s.top()]>=arr[i]){
                s.pop();
            }
            ans[i]=s.empty()? n:s.top();
            s.push(i);
        }
        return ans;
    }
  public:
    vector<int> findpse(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&arr[s.top()]>arr[i]){
                s.pop();
            }
            ans[i]=s.empty()? -1:s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> pse = findpse(arr);
        vector<int> nse = findnse(arr);
        long long sum=0;
        int mod= 1e9 +7;
        for(int i=0;i<n;i++){
            long long val=1LL*((i-pse[i])*(nse[i]-i))%mod;
            sum=(sum+(val*arr[i])%mod)%mod;

        }
        return sum;



        
    }
};