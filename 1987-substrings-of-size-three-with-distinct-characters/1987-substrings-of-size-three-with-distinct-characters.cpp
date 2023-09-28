class Solution {
public:
    int countGoodSubstrings(string s) {
        int i =0;
        int j =0;
        int k = 3;
        int n = s.size();
        unordered_map<char,int>mpp;
        int count =0;
        int ans =0;
        while(j<n)
        {
            mpp[s[j]]++;
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                for(auto i:mpp)
                {
                    if(i.second==1)
                    count++;
                }
                for(auto i:mpp)
                {
                    cout<<i.first<<" "<<i.second<<endl;
                }
                if(count==3)
                {
                    ans++;
                }
                count = 0;
                mpp[s[i]]--;
                i++;
                j++;
            }
        }
        return ans ;
    }
};