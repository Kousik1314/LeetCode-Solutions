class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int mover=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[mover];
                nums[mover]=temp;
                mover++;
            }
        }
    }
};