// write code for ford-fulkerson algorithm for custom graph
#include <bits/stdc++.h>
using namespace std;


// Function to implement Ford Fulkerson Algorithm
int fordFulkerson(vector<vector<int>> &graph, int source, int sink) {
    int V = graph.size();
    vector<vector<int>> rGraph = graph;
    vector<int> parent(V);
    int max_flow = 0;

    while (true) {
        fill(parent.begin(), parent.end(), -1);
        queue<int> q;
        q.push(source);
        parent[source] = source;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v = 0; v < V; v++) {
                if (parent[v] == -1 && rGraph[u][v] > 0) {
                    parent[v] = u;
                    q.push(v);
                }
            }
        } 

        if (parent[sink] == -1) break;

        int path_flow = INT_MAX;
        for (int v = sink; v != source; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (int v = sink; v != source; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

// Function to add edge to the graph
void addEdge(vector<vector<int>> &graph, int u, int v, int w) {
    graph[u][v] = w;
}

// Function to test the implementation of Ford Fulkerson Algorithm
int main() {
    int V;
    cin>>V;
    vector<vector<int>> graph(V, vector<int>(V, 0));
    int s,t;
    cin>>s>>t;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        addEdge(graph, u-1, v-1, w);
    }
    cout << "The maximum possible flow is " << fordFulkerson(graph, s-1,t-1) << endl;

    return 0;
}
