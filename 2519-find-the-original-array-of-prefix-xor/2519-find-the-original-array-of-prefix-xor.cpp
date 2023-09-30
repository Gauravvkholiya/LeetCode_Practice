class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int>ans;
        ans.push_back(pref[0]);
        int n = pref.size();
        for(int i =1;i<n;i++)
        {
            ans.push_back(pref[i]^pref[i-1]);
        }
        return ans;
    }
};