class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1) return 0;
        
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int mid= s + (e-s)/2;
            
            if(mid+1<nums.size() && nums[mid]>nums[mid+1]){
                e=mid;
            }
            else s=mid+1;
        }
        return s;
    }
};
