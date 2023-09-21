class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int rows = 0;
        int cols = m-1;

        while(rows<n&cols>-1)
        {
            int curr = matrix[rows][cols];
            if(curr==target)    return true;
            if(target>curr)     rows++;
            else    cols--;

        }
        return false;
    }
};