class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> revgrid(n,vector<int>(n));
        for(int r=0; r<n; r++){
            for(int c=0; c<n; c++){
                revgrid[c][r]=grid[r][c];
            }
        }

        int eq=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i]==revgrid[j]) eq++;
            }
        }
        return eq;
    }
};
