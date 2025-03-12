class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pMax=0;
        int nMax=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pMax++;
            else{
                if(nums[i]<0) nMax++;
            }
            ans=max(pMax,nMax);
        }
        return ans;
    }
};