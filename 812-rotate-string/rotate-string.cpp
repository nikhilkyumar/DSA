class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string doublestring = s+s;
        return strstr(doublestring.data(),goal.data());
    
    }
};