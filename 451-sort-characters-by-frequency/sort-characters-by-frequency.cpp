class Solution {
public:
    string frequencySort(string s) {
        map<char,int>charfreq;
        for(int i=0;i<s.size();i++){
            charfreq[s[i]]++;
        }
        vector<char>unist;
        for(auto& [ch,freq]:charfreq){
            unist.push_back(ch);
        }
        sort(unist.begin(),unist.end(),[&](char a, char b){
            return charfreq[a]> charfreq[b];
        });
        string result;
        for(char ch:unist){
            result+=string(charfreq[ch],ch);
        }
        return result;
        
        
    }
};