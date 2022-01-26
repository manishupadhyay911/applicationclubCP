class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int i=0,j=0;
        int n=name.size(), m = typed.size();
        while(i<n){
            int t1=1,t2=1;
            if(name[i]!=typed[j]) return 0;

                while(i<n-1 and name[i+1]==name[i]) t1++,i++;
                i++;
            
                while(j<m-1 and typed[j+1]==typed[j]) t2++,j++ ;
                j++;
            
            if(t2<t1) return 0;
        }
        if(j==m) return 1;
        else return 0;
        
    }
};
