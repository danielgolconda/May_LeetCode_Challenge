class Solution {
public:
    bool canConstruct(string a, string b) {
        int n = a.size(),m=b.size();
        if(m == 0 && n > 0)
        {
            return false;
        }
        map <char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mp.find(b[i]) != mp.end())
            {
                mp[b[i]]--;
            }
        }
        int ans = 0;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second <= 0)
            {
                ans++;
            }
        }
        if(ans == mp.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
