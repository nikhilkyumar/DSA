class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xr=start^goal;
        int count=0;
        while(xr>0){
            xr=xr&(xr-1);
            count++;

        }
        return count;
        
    }
};