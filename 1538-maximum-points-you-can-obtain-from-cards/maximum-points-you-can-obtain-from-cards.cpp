class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();

        int maxsum=INT_MIN;
        int lsum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
            maxsum=lsum;
        }
        int rightsum=0;
        int right=n-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rightsum+=cardPoints[right];
            maxsum=max(maxsum,lsum+rightsum);
            right--;

        }
        return maxsum;
    }
};