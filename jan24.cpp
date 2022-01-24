class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        text+=" ";
        int count=0;
        int freq[26]={0};
        for(char x:brokenLetters) freq[x-'a']=1;
        int flag=1;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                if(flag==1) count++;
                flag=1;
            }
            else{
                if(freq[text[i]-'a']==1) flag=0;
            }
        }
        return count;
    }
};
