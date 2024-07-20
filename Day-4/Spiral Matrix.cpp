class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0, j = 0;
        vector<int> v;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        while (1)
        {
            int count = 0;
            while (i != m && vis[j][i] != 1)
            {
                v.push_back(matrix[j][i]);
                vis[j][i] = 1;
                count++;
                i++;
            }
            i--;
            j++;
            while (j != n && vis[j][i] != 1)
            {
                v.push_back(matrix[j][i]);
                vis[j][i] = 1;
                count++;
                j++;
            }
            j--;
            i--;
            while (i >= 0 && vis[j][i] != 1)
            {
                v.push_back(matrix[j][i]);
                vis[j][i] = 1;
                i--;
                count++;
            }
            i++;
            j--;
            while (j >= 0 && vis[j][i] != 1)
            {
                v.push_back(matrix[j][i]);
                vis[j][i] = 1;
                j--;
                count++;
            }
            j++;
            i++;
            if (count == 0)
            {
                return v;
            }
        }
        return v;
    }
};