#include <iostream> 
#include <utility>
#include <vector>
#include <queue>

using namespace std;

int primMst(vector<vector<vector<int>>> &adj) {
    int V = adj.size();

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<bool> visited(V, false);

    int res = 0;

    pq.push({0,0});

    while(!pq.empty()) {
        auto p = pq.top();
        pq.pop();
        int wt = p.first;
        int u = p.second;

        if(visited[u]) continue;
        
        res += wt;
        visited[u] = true;

        for(auto &v : adj[u]) {
            if(!visited[v[0]]) {
                pq.push({v[1], v[0]});
            }
        }
    }
    
    return res;
}


int main() {
    int V = 3;
    vector<vector<vector<int>>> adj(V);

    adj[0].push_back({1,5});
    adj[1].push_back({0,5});

    adj[1].push_back({2,3});
    adj[2].push_back({1,3});

    adj[0].push_back({2,1});
    adj[2].push_back({0,1});

    cout << "Total weight: " << primMst(adj) << endl;

    return 0;
}