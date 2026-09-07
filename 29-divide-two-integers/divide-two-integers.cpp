class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1)
      return INT_MAX;
        bool sign = true;
        if(dividend>=0&&divisor<0)sign=false;
        if(dividend<0 && divisor>0)sign=false;
        long long n=abs((long long)dividend);
        long long k=abs((long long)divisor);
        long cnt;
        long long  ans=0;
        while(n>=k){
            cnt=0;
            while(n>=(k<<(cnt+1))){
                cnt++;
            }
            ans+=1<<cnt;
            n=n-(k<<cnt);
        }

        return sign?ans:-ans;
        
    }
};