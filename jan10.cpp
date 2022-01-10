class Solution {
public:
    int validsub(string s){
        if(s[0]==s[1] || s[0]==s[2] || s[1]==s[2]) return 0;
        else return 1;
    }
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3) return 0;
        for(int i=0;i<s.size()-2;i++){
        
            if(validsub(s.substr(i,3))) count++;
        }
        
        return count;
    }
};
