class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ls,rs;
        int n = nums.size();
        ls.push_back(0);
        rs.push_back(0);
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            ls.push_back(nums[i]+ls[i]);
        }
        int i =0;
        for(int j = n-1;j>=0;j--)
        {
            rs.push_back(nums[j]+rs[i++]);
        }
        int j = n-1;
        for(int i =0;i<n;i++)
        {
            ans.push_back(abs(ls[i]-rs[j--]));
        }
        return ans;
    }
};