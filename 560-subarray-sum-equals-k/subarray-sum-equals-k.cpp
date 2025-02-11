class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pre(n,0);
        //prefix sum
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        unordered_map<int, int> m;
        int c=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k){
                c++;
            }
            int rem=pre[i]-k;
            if(m.find(rem)!=m.end()){
                c+=m[rem];
            }
            m[pre[i]]++;
        }
        return c;
    }
};