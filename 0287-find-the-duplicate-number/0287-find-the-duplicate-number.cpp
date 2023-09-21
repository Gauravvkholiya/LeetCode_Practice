class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      vector<int>v(nums.size(),0);
        for(int i =0;i<nums.size();i++)
        {
            v[nums[i]]= v[nums[i]]+1;
            
        }
        for(int i =1;i<=v.size();i++)
        {
            if(v[i]>1)
            {
                return i;
            }
        }
        return 0;  

        // while(nums[0]!=nums[nums[0]])
        // {
        //     swap(nums[0],nums[nums[0]]);
        // }
        // return nums[0];
    }
};