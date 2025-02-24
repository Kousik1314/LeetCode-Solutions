class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> map;
        int n=strs.size();
        for(string str: strs){
            string lexo=str;
            sort(lexo.begin(),lexo.end());
            if(map.find(lexo)!=map.end()){ //if mil gaya
                map[lexo].push_back(str); //sorted wala string ke values par str push kar diya vector me
            }
            else{ //agar nhi mila
                vector<string> v;
                v.push_back(str);
                map[lexo]=v;  //string ke value means vector ko daala, vector me str hai..
            }
        }
        for(auto x: map){
            vector<string> s=x.second;
            ans.push_back(s);
        }
        return ans;
    }
};