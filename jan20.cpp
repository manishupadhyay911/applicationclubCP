class Solution {
public:
   
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> freq(20);
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int n=arr[i];
            int c=0;
            while(n>0){
                n=n&(n-1);
                c++;
            }
           
            freq[c].push_back(arr[i]);
        }
        for(int i=0;i<20;i++){
            if(freq[i].size()==0) continue;
            sort(freq[i].begin(),freq[i].end());
            for(auto x: freq[i]) ans.push_back(x);
        }
        return ans;
    }
};
