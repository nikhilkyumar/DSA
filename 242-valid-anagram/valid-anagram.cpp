class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        unordered_map<char,int> freq2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            freq2[t[i]]++;

        }
        if(freq==freq2){
            return true;
        }
        return false;
        
    }
};