#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void dfs(int x, int y, int n, int m, vector<vector<char>> &grid, vector<vector<int>> &vis)
    {
        int Ar[] = {-1, 0, 1, 0};
        int Ac[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++)
        {
            int px = x + Ar[i];
            int py = y + Ac[i];
            if (px >= 0 && px < n && py >= 0 && py < m && grid[px][py] == '1' && vis[px][py] == 0)
            {
                vis[px][py] = 1;
                dfs(px, py, n, m, grid, vis);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && vis[i][j] == 0)
                {
                    vis[i][j] = 1;
                    dfs(i, j, n, m, grid, vis);
                    count++;
                }
            }
        }
        return count;
    }
};