class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26]={0};
        for(int i=0;i<chars.size();i++){
            arr[chars[i]-'a']++;
        }
        
        int ans=0;
        for(string s: words){
            int bb[26]={0};
            int flag=1;
            for(int i=0;i<s.size();i++){
                bb[s[i]-'a']++;
            }
            
            for(int i=0;i<26;i++){
                if(bb[i]>arr[i]){
                    flag=0;
                    break;
                } 
            }
            if(flag) ans+=s.size();
            
        }
        return ans;
    }
};
