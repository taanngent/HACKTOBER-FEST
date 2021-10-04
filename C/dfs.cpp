#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void traverse(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << ": ";
        sort(adj[i].begin(), adj[i].end());

        for (auto u : adj[i])
        {
            cout << u << " ";
        }

        cout << endl;
    }
}

void dfsmain(bool vis[], vector<int> adj[], int s)
{
    vis[s] = true;
    cout << s << " ";

    for (auto i : adj[s])
    {
        if (vis[i] == false)
        {
            dfsmain(vis, adj, i);
        }
    }
}

void dfs(vector<int> adj[], int s, int v)
{
    bool vis[v];
    for (int i = 0; i < v; i++)
        vis[i] = false;

    dfsmain(vis, adj, 0);
}

int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);

    //traverse(adj, v);
    dfs(adj, 0, v);
}
