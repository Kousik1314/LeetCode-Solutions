class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans =0;

        for(int i=0;i<nums.size();i++)
        {
             if(check(nums[i]))
             {
                ans++;
             }
        }
        return ans;
    }

    bool check(int n)
    {
        int temp = 0;
        
        while(n)
        {
            n = n / 10;
            temp++;
        }
        return (temp % 2 == 0);
    }
};