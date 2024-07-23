#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    void solve(int V, vector<int> adj[], vector<int> &vis, vector<int> &ans, int ind)
    {

        ans.push_back(ind);

        vis[ind] = 1;

        for (auto i : adj[ind])
        {
            if ((vis[i] == -1))
            {
                solve(V, adj, vis, ans, i);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> vis(V, -1);
        vector<int> ans;
        solve(V, adj, vis, ans, 0);
        return ans;
    }
};