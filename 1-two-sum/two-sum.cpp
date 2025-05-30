class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end()){
                return {mp[complement],i}; //returned stored index, current index
            }
            mp[nums[i]]=i; //storing element with index
        }
        return {};
    }
};