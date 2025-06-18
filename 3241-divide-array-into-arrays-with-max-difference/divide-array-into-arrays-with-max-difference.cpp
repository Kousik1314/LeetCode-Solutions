#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int maxDiff) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i += 3) {
            int minVal = nums[i];
            int maxVal = nums[i + 2];

            if (maxVal - minVal > maxDiff)
                return {};  // not possible

            result.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }

        return result;
    }
};
