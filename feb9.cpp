class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sa(256,-1);
        vector<int> ta(256,-1);
        for(int i=0;i<s.size();i++){
            if(sa[s[i]]==-1){
                sa[s[i]]=t[i];
                if(ta[t[i]]==-1){
                    ta[t[i]]=s[i];
                }
                else return 0;
            }
            else if(sa[s[i]]!=t[i]) return 0;
        }
        return 1;
    }
};
