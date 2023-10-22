class Solution {
public:
bool f(vector<int>&arr,int target,int i ,vector<vector<int>>&dp)
{
    if(target==0)
    return true;

    if(i==0)
    return (arr[0]== target);

    if(dp[i][target]!=-1)
    {
        return dp[i][target];
    }

    bool nottake = f(arr,target, i-1,dp);
    bool take = false;
    if(target>=arr[i])
    {
        take = f(arr,target-arr[i],i-1,dp);
    }
    return dp[i][target] = take | nottake;
    
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(int i =0;i<n;i++)
        {
            sum+= nums[i];

        }

        if(sum%2!=0)
        return false;
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
        return f(nums,sum/2,n-1,dp);
    }
};