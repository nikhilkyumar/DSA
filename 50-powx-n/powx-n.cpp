class Solution {
private:
double pow(double x,long long n){
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }

    if(n%2==0){
        return pow(x*x,n/2);
    }
    return x*pow(x,n-1);
}
public:
    double myPow(double x, int n) {
        long long N=n;
      if(N<0){
        x=1/x;
        N=-N;
      }
      return pow(x,N);
    }
};