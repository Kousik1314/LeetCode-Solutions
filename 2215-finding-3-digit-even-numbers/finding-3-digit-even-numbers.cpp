class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_map<int, int> map;
        for(auto ele: digits){
            map[ele]++;
        }
        vector<int> ans;
        for(int i=100;i<=999;i+=2){
            int x=i;
            int a=x%10; //ones digit
            x/=10;
            int b=x%10; //tens digit
            x/=10;
            int c=x;  //hundredth digit

            if(map.find(a)!=map.end()){
                map[a]--;
                if(map[a]==0) map.erase(a);
                if(map.find(b)!=map.end(b)){
                    map[b]--;
                    if(map[b]==0) map.erase(b);
                    if(map.find(c)!=map.end()) ans.push_back(i);
                    map[b]++;
                }
                map[a]++;
            }
        }
        return ans;
    }
};