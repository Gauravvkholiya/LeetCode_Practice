class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            return nums[0];
        }
        int j =1;
        for(int i =0;i<n;i++)
        {
            while(nums[i]==nums[j])
            {
                j++;
                if(j>n/2)
                {
                return nums[i];
                break;
                }
            }
        }
        return 0;
    }
};
