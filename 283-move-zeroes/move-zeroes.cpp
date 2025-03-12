class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[])
        // }
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==0){
                    nums[i]=nums[j];
                    nums[j]=0;
                }

            }
        }
        
    }
};