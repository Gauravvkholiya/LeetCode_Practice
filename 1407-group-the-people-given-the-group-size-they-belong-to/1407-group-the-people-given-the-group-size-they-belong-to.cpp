class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>mpp;
        vector<vector<int>>result;
        int n = groupSizes.size();
        int index;
        for(int i =0;i<n;++i)
        {
            index = groupSizes[i];
            mpp[index].push_back(i);
            if(mpp[index].size()==index){
            result.push_back(mpp[index]);
            mpp[index].clear();
            }
        }
        return result;
    }
};