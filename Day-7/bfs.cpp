#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        queue<int> q;
        vector<int> ans;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;
        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            ans.push_back(t);
            for (auto i : adj[t])
            {
                if (!vis[i])
                {
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
        return ans;
    }
};