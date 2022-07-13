class Solution {  
public:
    int m, n;
    bool ocean1[205][205], ocean2[205][205];
    int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
    vector<vector<int>> heights;//定义了一个heights
    bool check(int x, int y)
    {
        if(x >= 0 && x < m && y >= 0 && y < n) return 1;
        return 0;
    }
    void dfs1(int x, int y)
    {
        if(ocean1[x][y]) return;
        
        ocean1[x][y] = 1;
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if(check(nx,ny) && (ocean1[nx][ny] == false) && heights[x][y] <= heights[nx][ny]) dfs1(nx,ny);
            
        }
        
    }

    void dfs2(int x, int y)
    {
        if(ocean2[x][y]) return;
        
        ocean2[x][y] = 1;
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if(check(nx,ny) && ocean2[nx][ny] == false && heights[x][y] <= heights[nx][ny]) dfs2(nx,ny);
            
        }
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        this->heights = heights;
        m=heights.size();
        n=heights[0].size();
        for(int i = 0; i < m; i++) dfs1(i,0);
        for(int j = 0; j < n; j++) dfs1(0,j);
        for(int i = 0; i < m; i++) dfs2(i,n-1);
        for(int j = 0; j < n; j++) dfs2(m-1,j);

        vector<vector<int>> ans; 

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
            {
                if(ocean1[i][j] && ocean2[i][j])
                {
                    vector<int> cell;
                    cell.emplace_back(i);
                    cell.emplace_back(j);
                    ans.emplace_back(cell);
                }
            }
        return ans;
    }
};