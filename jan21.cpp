class Solution {
public:
    
    int valid(vector<int> v, int k ,int h){
        int c = 0;
        for(int i=v.size()-1;i>=0;i--){
            c+=ceil((double)v[i]/k);
            if(c>h) return 0;
        }
        if(c<=h) return 1;
        else return 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        // sort(piles.begin(),piles.end());
        int e = INT_MIN;
        for(int i=0;i<piles.size();i++) e = max(e,piles[i]);
        int s=1 ;
        // e=piles.back();
        long ans=piles.size();
        while(s<=e){
            int mid = s + (e-s)/2;
            if(valid(piles,mid,h)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1 ;
        }
        return ans;
    }
};
