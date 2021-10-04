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
        for (auto u : adj[i])
        {
            cout << u << " ";
        }

        cout << endl;
    }
}

void bfs(vector<int> adj[], int v, int s)
{
    bool vis[v];
    for (int i = 0; i < v; i++)
        vis[i] = false;

    vis[s] = true;

    queue<int> q;
    q.push(s);

    while (q.empty() == false)
    {
        int curr = q.front();
        q.pop();

        cout << curr << " ";

        for (auto i : adj[curr])
        {
            if (vis[i] == false)
            {
                vis[i] = true;
                q.push(i);
            }
        }
    }
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
    bfs(adj, v, 0);
}
