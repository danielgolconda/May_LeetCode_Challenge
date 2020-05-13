class Solution {
public:
    string removeKdigits(string s, int k) {
        int n = s.size();
        if(n <= k)
        {
            return "0";
        }
        stack <char> st;
        int p = k;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top() <= s[i])
                {
                    st.push(s[i]);
                }
                else
                {
                    while(st.empty() == false && st.top() > s[i] && k > 0)
                    {
                        k--;
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty() && st.size() > (n-p))
        {
            st.pop();
        }
        string a="";
        while(!st.empty())
        {
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
        string res="";
        int i = 0;
        while(a[i] == '0' && i < a.size())
        {
            i++;
        }
        for(;i<a.size();i++)
        {
            res+=a[i];
        }
        if(res.size() == 0)
        {
            return "0";
        }
        return res;
    }
};
