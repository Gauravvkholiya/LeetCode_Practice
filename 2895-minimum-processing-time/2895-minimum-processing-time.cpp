class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(),processorTime.end());
        int  n = tasks.size();
        int maxi = INT_MIN;
        int j = 0;
        for(int i = n-1;i>=0;i-=4)
        {
            int mx = INT_MIN;
            int p1 = tasks[i]+processorTime[j];
            int p2 = tasks[i-1]+processorTime[j];
            mx = max(p1,p2);
            int p3 = tasks[i-2]+processorTime[j];
            mx = max(mx,p3);
            int p4 = tasks[i-3]+processorTime[j];
            mx = max(mx,p4);
            maxi = max(maxi ,mx);
            j++;
        }
        return maxi;
    }
};