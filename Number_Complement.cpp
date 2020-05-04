class Solution {
public:
    int findComplement(int num) {
     string s = "";
        if(num == 0)
        {
            return 1;
        }
     int ind = -1;
     for(int i=0;i<32;i++)
     {
         if((num&(1<<i)) > 0)
         {
             s+='1';
             ind = i;
         }
         else
         {
             s+='0';
         }
     }
        int ans = 0;
        for(int i=0;i<=ind;i++)
        {
            if(s[i] == '0')
            {
                ans += (1<<i);
            }
        }
        return ans;
    }
};
