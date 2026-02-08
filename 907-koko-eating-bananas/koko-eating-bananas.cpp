class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int result=high;
        while(low<=high){
            long long hour=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<piles.size();i++){
                hour+=(piles[i]+mid-1)/mid;
            }
            if(hour>h){
                low=mid+1;
            }else{
                high=mid-1;
                result=min(result,mid);
            }
        }
        return result;
    }
};