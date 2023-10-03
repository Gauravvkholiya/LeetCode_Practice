class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = word1.size();
        int m = word2.size();
        int i = 0;
        int j = 0;
        string ans="" ;
        while(i<n&&j<m)
        {
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;
            j++;
        }
        while(i<n)
        {
            ans.push_back(word1[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};