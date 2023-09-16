class Solution {
public:
    int totalSteps(vector<int>& nums) {
        
        int n = nums.size();
        stack<pair<int,int>>st;   //count,index
        int ans = 0;
        int count =0;
        for(int i = n-1;i>=0;i--)
        {
            while(st.size()&& nums[i]>nums[st.top().second])
            {
                count = max(count+1,st.top().first);
                st.pop();
            }

            st.push({count , i});
            ans = max(ans,count);
            count = 0;

        }
        return ans;
    }
};