//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long long,long long>> adj[n];
        for(auto it : roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<long long,long long>, vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    vector<long long> dist(n,1e15),ways(n,0);
    dist[0] = 0;
    ways [0] = 1;
    pq.push({0,0});
    int mod = (int)(1e9 + 7);
    while(!pq.empty()){
        long long dis = pq.top().first;
        long long node = pq.top().second;
        pq.pop();
        for(auto it: adj[node]){
            long long adjnode = it.first;
            long long edw = it.second;
            if(dis + edw < dist[adjnode]){
                dist[adjnode] = dis + edw;
                pq.push({dis + edw, adjnode});
                ways[adjnode] = ways[node];

            }
            else if(dis + edw == dist[adjnode]){
                ways[adjnode] = (ways[adjnode] + ways[node])%mod;
            }
        }

    }
return ways[n-1] % mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends