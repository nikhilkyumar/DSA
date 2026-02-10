class Solution {
private:
long long defpow(long long x,long long n){
    long long mod=1e9+7;
    if(x==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return x%mod;
    }
      long long temp = defpow(x, n / 2);
        temp = (temp * temp) % mod;

        if (n % 2 == 1) {
            temp = (temp * x) % mod;
        }

        return temp;
}
public:
    int countGoodNumbers(long long n) {
        long long mod=1e9+7;
        long long even=(n+1)/2;
        long long odd=n/2;
        long long ans=(defpow(5,even)*defpow(4,odd))%mod;
        return ans;
       
        
    }
};