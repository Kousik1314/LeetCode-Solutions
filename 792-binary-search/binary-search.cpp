class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;int high=n-1; int mid=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid]) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};