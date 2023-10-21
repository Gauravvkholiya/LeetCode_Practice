class Solution {
public:
    int find(int m ,int n, vector<vector<int>>dp)
    {
        if(m==0&&n==0)
        {
            return 1;
        }
        if(m<0||n<0)
        {
            return 0;
        }
        if(dp[m][n]!=-1)
        {
            return dp[m][n];
        }
        int up = find(m-1,n,dp);
        int left =find(m,n-1,dp);
        return dp[m][n] =  up +left;
    }
    int uniquePaths(int m, int n) {
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