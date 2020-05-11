class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector <int> indeg(N+1,0);
        vector <int> outdeg(N+1,0);
        
        for(int i=0;i<trust.size();i++)
        {
            indeg[trust[i][1]]+=1;
            outdeg[trust[i][0]]+=1;
        }
        for(int i=1;i<indeg.size();i++)
        {
            if(indeg[i] == N-1 && outdeg[i] == 0)
            {
                return i;
            }
        }
        return -1;
    }
};
