class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
        if(co.size() == 2)
        {
            return true;
        }
        int n = co.size();
        int x1 = co[0][0],y1=co[0][1],x2 = co[1][0],y2 = co[1][1];
        if(x1 == x2)
        {
            for(int i=2;i<n;i++)
            {
                if(co[i][0] != x1)
                {
                    return false;
                }
            }
        }
        else if(y1 == y2)
        {
            for(int i=2;i<n;i++)
            {
                if(co[i][1] != y1)
                {
                    return false;
                }
            }
        }
        else
        {
            int sl = (y2-y1)/(x2-x1);
            for(int i=2;i<n;i++)
            {
                 int x1 = co[i-1][0],y1=co[i-1][1],x2 = co[i][0],y2 = co[i][1];
                if(x1 == x2 || y1 == y2)
                {
                    return false;
                }
                int kl = (y2-y1)/(x2-x1);
                if(kl != sl)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
