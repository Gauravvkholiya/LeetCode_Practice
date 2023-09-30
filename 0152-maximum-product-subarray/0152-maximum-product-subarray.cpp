class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //brute force:
    // int result = INT_MIN;
    // for(int i=0;i<nums.size()-1;i++) {
    //     for(int j=i+1;j<nums.size();j++) {
    //         int prod = 1;
    //         for(int k=i;k<=j;k++) 
    //             prod *= nums[k];
    //         result = max(result,prod);    
    //     }
    // }
    // return result; 

        //better approach:
    //     int result = nums[0];
    // for(int i=0;i<nums.size()-1;i++) {
    //     int p = nums[i];
    //     for(int j=i+1;j<nums.size();j++) {
    //        result = max(result,p);
    //        p *= nums[j];
    //     }
    //     result = max(result,p);//manages (n-1)th term 
    // }
    // return result; 

    //optimal approach:
     int n = nums.size(); //size of array.
    int maxi = INT_MIN;
    int pro = 1;
    for(int i =0;i<n;i++)
    {
        pro = pro*nums[i];
        maxi = max(maxi,pro);
        if(pro==0)
        {
            pro = 1;
        }

    }
    pro = 1;
    for(int i = n-1;i>=0;i--)
    {
        pro = pro*nums[i];
        maxi = max(pro,maxi);
        if(pro ==0)
        {
            pro = 1;
        }
    }
    return maxi;



    }
};