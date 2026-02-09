class Solution {
public:
    int myAtoi(string s) {
     int r=s.length();
     int l=0;
     while(s[l]==' '){
        l++;
     }
     if(l==r){
        return 0;
     }
     bool neg=false;
     if(s[l]=='-'){
        neg=true;
        l++;
     }else if(s[l]=='+'){
        neg=false;
        l++;
     }else if(!isdigit(s[l])){
        return 0;
     }
     while(s[l]=='0'){
        l++;
     }if(l==r){
        return 0;
     }
     int digit=0;
     int max= INT_MAX/10;
     int min=INT_MIN/10;

     while(isdigit(s[l])){
        int val=0;
         val=s[l]-'0';
        if(digit>max){
            return INT_MAX;
        }else if(digit==max&&val>7){
            return INT_MAX;
        }
        if(digit<min){
            return INT_MIN;
        }else if(digit==min &&val>8){
            return INT_MIN;
        }
        
       if(neg==true){
        digit=digit*10-val;
       }else{
        digit=digit*10+val;
       }
      l++;



     }   
     return digit;
    }
};