// How to do DFS ( Depth-first Search)

#include <iostream>
#include <vector>

using namespace std;

vector<int> dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &anslist)
{
    visited[node] = true;
    anslist.push_back(node);

    for (auto nb : adj[node])
    {
        if (!visited[nb])
        {
            dfs(nb, adj, visited, anslist);
        }
    }

    return anslist;
}

void addEdge(vector<vector<int>> &adjList, int u, int v)
{
    adjList[u].push_back(v);
}

int main()
{
    int vertices = 5;

    vector<vector<int>> adjList(vertices);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);

    vector<bool> visited(vertices, false);
    int start = 0;

    vector<int> anslist;

    vector<int> result = dfs(start, adjList, visited, anslist);

    cout << "Depth First Traversal starting from vertex 0: ";
    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
