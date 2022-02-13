class Solution {
public:
    int numDifferentIntegers(string word) {
        map<string,int> mp;
        for(int i=0;i<word.size();i++){
            string str="";
            while(i<word.size() and word[i]>='0' and word[i]<='9')
                str+=word[i] , i++;
            if(str.size()>0){
             
            int k=0;
            while(str[k]=='0') k++;
            str=str.substr(k);
            
            mp[str]++;
            }
            
        }
        return mp.size();
    }
};
