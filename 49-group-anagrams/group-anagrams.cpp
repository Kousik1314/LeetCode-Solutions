class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string x: strs){
            string sorted=x;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto a: mp){
            ans.push_back(a.second);
        }
        return ans;
    }
};