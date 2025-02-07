class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans1;
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(map.find(ans)!=map.end()){
                ans1.push_back(map[ans]);
                ans1.push_back(i);
            }
            else map[nums[i]]=i;
        }
        return ans1;
    }
};