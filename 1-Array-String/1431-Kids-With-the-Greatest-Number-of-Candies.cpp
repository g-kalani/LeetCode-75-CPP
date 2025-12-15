class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxC=0;
        for(int i=0; i<n; i++){
            if(candies[i]>maxC) maxC=candies[i];
        }
        
        vector<bool> ans(n, false);
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=maxC) ans[i]=true;
        }

        return ans;
    }
};