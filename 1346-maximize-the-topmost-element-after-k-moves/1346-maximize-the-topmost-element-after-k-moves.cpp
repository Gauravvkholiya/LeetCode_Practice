class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k==0)
        return nums[0];
        if(n==1&& k%2==0)
        return nums[0];
        if(n==1 && k%2!=0)
        return -1;
        if(k==1)
        {
            return nums[1];
        }
        priority_queue<int>pq;
        int i =0;
        int x = k-1;
        while(x-- && i<n)
        {
            pq.push(nums[i++]);
        }
        if(k>n)
        {
            return pq.top();
        }
        if(k<n)
        {
            return max(pq.top(),nums[k]);
        }
        return pq.top();
    }
};