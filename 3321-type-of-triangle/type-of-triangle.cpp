class Solution {
public:
    string triangleType(vector<int>& nums) {
        int left=nums[0],mid=nums[1],right=nums[2];
        if(left+mid>right && mid+right>left && left+right>mid){
        if(left==right && left==mid && mid==right) return "equilateral";
        else if(left==mid || left==right || mid==right) return "isosceles";
        else return "scalene";
        }
        else return "none";
    }
};