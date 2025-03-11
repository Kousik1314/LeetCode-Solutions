class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;int h=nums.size()-1;
        int ans=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            //checking if left half sorted
            if(nums[l]<=nums[mid]){
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else{
                //check right half sorted 
                ans=min(ans,nums[mid]);
                h=mid-1;
            }
        }
        return ans;
    }
};