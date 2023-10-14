class Solution {
public:
    string reverseWords(string s) {

        //optimal solution : reducing the space 
        //T.C = O(n) && S.C = O(1) 
        cin.tie(0);
        cout.tie(0);

        int n = s.size();
        string temp = "";
        string ans = "";
        for(int i =0;i<n;i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            while(s[i]!=' '&& i<n)
            {
                temp +=s[i];
                i++;
            }
            if(ans=="")
            {
                ans+=temp;
                temp="";
            }
            else{
                ans= temp+" "+ans;
                temp="";
            }
        }
        return ans;

        //brute force:--
        // T.C = O(n)
        //S.C = O(n)
        // string temp="";
        // stack<string> st;
        // string ans;
        // int n = s.size();
        // for(int i = 0;i<n;i++)
        // {
        //     if(s[i]==' ')
        //     {
        //         continue;
        //     }
        //     while(i<n&&s[i]!=' ')
        //     {
        //         temp+=s[i];
        //         i++;
        //     }
        //     st.push(temp);
        //     temp="";
        // }

        // while(st.size()!=1)
        // {
        //     ans += st.top()+" ";
        //     st.pop();
        // }
        // ans+=st.top();
        // return ans;

    }
};