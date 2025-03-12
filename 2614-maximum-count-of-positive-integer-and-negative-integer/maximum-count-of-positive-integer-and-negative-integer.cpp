class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nMax=0; int pMax=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pMax++;
            else if(nums[i]<0) nMax++;
        }
        return max(pMax,nMax);
    }
};