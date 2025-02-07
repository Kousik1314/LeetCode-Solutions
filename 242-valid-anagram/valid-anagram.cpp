class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            map2[t[i]]++;
        }
        for(auto ele: map1){
            char ch1 = ele.first;
            int freq1=ele.second;
            if(map2.find(ch1)!=map2.end()){
                int freq2=map2[ch1];
                if(freq2!=freq1) return false;
            }
            else return false;
            
        }
        return true;
    }
};