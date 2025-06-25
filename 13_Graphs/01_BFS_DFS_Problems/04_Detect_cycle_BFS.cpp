// Problem: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// Author: Nayaab Zameer

#include <bits/stdc++.h>
using namespace std;
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
  for (int i = 0; i < V; i++)
  {
    if (!vis[i])
    {
      queue<pair<int, int>> q;
      q.push({i, -1}); 
      vis[i] = 1;

      while (!q.empty())
      {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node])
        {
          if (!vis[neighbor])
          {
            vis[neighbor] = 1;
            q.push({neighbor, node});
          }
          else if (neighbor != parent)
          {
            return true;
          }
        }
      }
    }
  }
  return false; 
}