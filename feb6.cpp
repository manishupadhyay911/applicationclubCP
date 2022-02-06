class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        
        int i=0,j=n-1;
        int c=0;
        while(i<j){
            if(people[i]+people[j]<=limit){
                 c++;
                 i++;
                 j--;
            }
            else {
                j--;
                c++;
            }
            
        }
        if(i==j) c++;
        
        return c;
    }
};
