class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
                int lsum=0,rsum=0,maxi=0,sum=0;

        for(int i=0;i<k;++i){
            lsum=lsum+cardPoints[i];
            maxi=lsum;
        }

        int r=cardPoints.size()-1;

        for(int i=k-1;i>=0;--i){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[r];
            r--;
            sum=lsum+rsum;
            maxi=max(maxi,sum);
            
        }

        return maxi;
        
    }
};