class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto i :operations )
        x += 44-i.at(1);
        return x;
    }
};