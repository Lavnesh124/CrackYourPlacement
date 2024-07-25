#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
class Solution
{
public:
    bool dfs(vector<vector<char>> &board, vector<vector<int>> &visit, string word, int row, int col, int n, int m, int ind)
    {
        if (visit[row][col] == 0)
        {
            visit[row][col] = 1;
            int rownum[4] = {-1, 0, 1, 0};
            int colnum[4] = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++)
            {
                int nrow = row + rownum[i];
                int ncol = col + colnum[i];
                int nind = ind + 1;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visit[nrow][ncol] == 0 && nind < word.length() && board[nrow][ncol] == word[nind])
                {
                    if (dfs(board, visit, word, nrow, ncol, n, m, nind) == true)
                    {
                        return true;
                    }
                }
                else if (ind + 1 == word.length())
                {
                    return true;
                }
            }
        }
        // Remember to mark the current element as unvisited
        visit[row][col] = 0;
        return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visit[i][j] == 0 && board[i][j] == word[0])
                {
                    if (dfs(board, visit, word, i, j, n, m, 0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};