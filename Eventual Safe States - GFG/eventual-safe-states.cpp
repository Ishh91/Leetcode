//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
private:
    bool DFS(vector<int> adj[], int currNode, vector<bool> &visited, vector<bool> &currRecurr, vector<bool> &check){
        visited[currNode] = true;
        currRecurr[currNode] = true;
        check[currNode] = false;
        for(int &v : adj[currNode]){
            if(visited[v] && currRecurr[v]){
                return true;
            }
            else if(!visited[v]){
                if(DFS(adj, v, visited, currRecurr,check)) return true;   
            }
        }
        check[currNode] = true;
        currRecurr[currNode] = false;
        return false;
    }
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<bool> visited(V, false), currRecurr(V, false), check(V,false);
        vector<int> safenode;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                DFS(adj, i, visited, currRecurr,check);
            }
        }
        for(int i = 0; i<V;i++){
            if(check[i] == 1) safenode.push_back(i);
        }
        return safenode;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends