class Solution {
public:
    int reverse(int n){
        int r=0;
        while(n>0){
            r=n%10+r*10;
            n/=10;
        }
        
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> map;
        int count=0;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-reverse(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(map.find(nums[i])!=map.end()){
                count=count%1000000007;
                count+=map[nums[i]];
                map[nums[i]]++;
            }
            else map[nums[i]]++;
        }
        return count%1000000007;
    }
};