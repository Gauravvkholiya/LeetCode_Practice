class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //optimal approach : T.C: O(n) and S.C = O(n)
        vector<int> mpp(256,-1); // string can have 256 characters 

        int left =0,right =0;
        int n = s.size();
        int len = 0;
        while(right<n)
        {
            if(mpp[s[right]]!=-1)
            left = max(mpp[s[right]]+1,left);

            mpp[s[right]] = right ;
             
            len = max(len,right-left+1);
            right++;
        }
        return len;



        // better solution can have a set and will have the complexity O(2n) ans space complexity O(n)

        // unordered_set<char> set;
        // int left = 0;
        // int right =0;
        // int n =s.size();
        // int ans = 0;

        // while(left <n & right <n)
        // {
        //     if(set.find(s[right])== set.end())
        //     {
        //         set.insert(s[right++]);
        //         ans = max(ans,right-left);
        //     }
        //     else{
        //         set.erase(s[left++]);
        //     }
        // }
        // return ans;
    }
};