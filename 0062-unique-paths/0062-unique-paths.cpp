class Solution {
public:
    int uniquePaths(int m, int n) {
        cin.tie(0);
        vector<vector<int>>dp(m,vector<int>(n,1));
        dp[0][0] = 1;
        int up ,left;
        for(int i =1;i<m;i++)
        {
            for(int j =1;j<n;j++)
            {
                    if(i>0)
                    up = dp[i][j-1];
                    if(j>0)
                    left = dp[i-1][j];
                    dp[i][j] = left+up;
            }
        }
        return dp[m-1][n-1];
    }
};