class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=-1;
        int votes=0;
        for(int i=0;i<nums.size();i++){
            if(votes==0){
                candidate=nums[i];
                votes++;
            }
            else if(nums[i]==candidate) votes++;
            else votes--;
        }
        return candidate;
        
    }
};
