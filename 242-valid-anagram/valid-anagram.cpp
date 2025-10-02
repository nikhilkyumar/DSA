class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if(s.size()!= t.size()) return false;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
       if(mpp1 == mpp2) return true;
       return false;


        
    }
};