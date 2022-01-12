class Solution {
public:
    bool valid(char a){
        if((a>='A' and a<='Z') or (a>='a' and a<='z') or (a>='0' and a<='9')) return 1;
        else return 0;
    }
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            while(i<s.size() and !valid(s[i])) i++;
            while(j>0 and !valid(s[j])) j--;
            if(valid(s[i]) and valid(s[j])){
                if(tolower(s[i])!=tolower(s[j])){
                    // cout<<i<<" "<<j<<"\n";                    
                    return 0;

                } 
                i++;
                j--;
            }
            else{
                i++;
                j--;
            }
            
        }
        return 1;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9') ){
                if(s[i]>='A' and s[i]<='Z') temp+=s[i]+32;
                else temp+=s[i];
            }
        }
        int i=0,j=temp.size()-1;
        while(i<j){
            if(temp[i]!=temp[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
};
