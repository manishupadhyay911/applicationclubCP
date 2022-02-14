class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string s: strs){
            string k=s;
            sort(k.begin(),k.end());
            
            mp[k].push_back(s);
        }
        
        for(auto grp : mp){
            ans.push_back(grp.second);
        }
        return ans;
    }
};
