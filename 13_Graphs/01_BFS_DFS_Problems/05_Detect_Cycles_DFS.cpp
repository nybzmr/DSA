// Problem: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  void dfs(int node, int parent, vector<vector<int>> &adj, vector<int> &vis, bool &flag)
  {
    vis[node] = 1;
    for (int i : adj[node])
    {
      if (vis[i] != 1)
      {
        dfs(i, node, adj, vis, flag);
      }
      else
      {
        if (parent != i)
          flag = true;
      }
    }
  }
  vector<vector<int>> buildAdjacencyList(int n, vector<vector<int>> &edges)
  {
    vector<vector<int>> adj(n);

    for (auto &edge : edges)
    {
      int u = edge[0];
      int v = edge[1];
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    return adj;
  }
  bool isCycle(int V, vector<vector<int>> &edges)
  {
    // Code here

    int e = edges.size();
    vector<int> vis(V, 0);
    vector<vector<int>> adj = buildAdjacencyList(V, edges);
    bool flag = false;
    for (int i = 0; i < V; i++)
    {
      if (!flag && vis[i] != 1)
      {
        dfs(i, -1, adj, vis, flag);
      }
      if (flag)
        break;
    }
    return flag;
  }
};