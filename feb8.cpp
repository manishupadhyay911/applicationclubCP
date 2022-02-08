class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        for(int i=nums.size()-1;i>=0;i--) right+=nums[i];
        for(int i=0;i<nums.size();i++){
             right-=nums[i];
            if(left==right) return i;
             left+=nums[i];  
        }
        return -1;
    }
};
