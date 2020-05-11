class Solution {
public:
    void dfs(vector<vector<int>>& image,int sr,int sc,int n,int m,int newC,int oldC,vector<vector<int>>& vis)
    {
        if(sr < 0 || sr >= n || sc < 0 || sc >= m)
        {
            return ;
        }
        if(image[sr][sc] != oldC)
        {
            return ;
        }
        if(vis[sr][sc] == 1)
        {
            return ;
        }
        vis[sr][sc] = 1;
        image[sr][sc] = newC;
        dfs(image,sr+1,sc,n,m,newC,oldC,vis);
        dfs(image,sr-1,sc,n,m,newC,oldC,vis);
        dfs(image,sr,sc+1,n,m,newC,oldC,vis);
        dfs(image,sr,sc-1,n,m,newC,oldC,vis);
        return ;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newC) {
        int n = image.size();
        int m = image[0].size();
        int oldC = image[sr][sc];
        vector <vector<int>> vis(n,vector<int>(m,0));
        dfs(image,sr,sc,n,m,newC,oldC,vis);
        return image;
    }
};
