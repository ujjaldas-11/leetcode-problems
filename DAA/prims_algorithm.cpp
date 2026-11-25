#include <bits/stdc++.h>
#include <climits>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

typedef pair<int, int> pii; //weight & vertices

void PrimMst(vector<vector<pii>>& adj, int V) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    vector<int> key(V, INT_MAX); // min edge to reach vertices
    vector<int> parent(V, -1);  // stores mst
    vector<bool> inMst(V, false);  //   tracks vertices

    key[0] = 0;
    pq.push({0,0});

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        //if already in Mst skipp
        if(inMst[u]) continue;
        inMst[u] = true;

        //explore all adjs

        for(auto edge : adj[u]) {
            int weight = edge.first;
            int v = edge.second;

            //if v is not in Mst but this node is better
            if(!inMst[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});

            }
        }
    }

    cout << "Edge  \tWeight\n";
    int totalWeight = 0;

    for(int i = 1; i < V; i++ ) {
        cout << parent[i] << " - " << i << "\t" << key[i] << "\n";
        totalWeight += key[i];
    }


    cout << "Total weight: " << totalWeight << endl;

}

int main() {
    int V = 5;
    vector<vector<pii>> adj(V);

    // Undirected Graph (add both directions)
    // Format: adj[u].push_back({weight, v});

    adj[0].push_back({2, 1});
    adj[1].push_back({2, 0});

    adj[0].push_back({3, 3});
    adj[3].push_back({3, 0});

    adj[1].push_back({3, 2});
    adj[2].push_back({3, 1});

    adj[1].push_back({1, 3});
    adj[3].push_back({1, 1});

    adj[1].push_back({4, 4});
    adj[4].push_back({4, 1});

    adj[2].push_back({5, 4});
    adj[4].push_back({5, 2});

    adj[3].push_back({6, 4});
    adj[4].push_back({6, 3});


    PrimMst(adj, V);
    return 0;
}