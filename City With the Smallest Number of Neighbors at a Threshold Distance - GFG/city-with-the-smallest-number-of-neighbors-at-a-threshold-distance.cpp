//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                     vector<pair<int,int>> adj[n];
                     for(auto it: edges)
                     {
                         adj[it[0]].push_back({it[1],it[2]});
                         adj[it[1]].push_back({it[0],it[2]});
                     }
                     vector<vector<int>> ans;
                     for(int i=0;i<n;i++)
                     {
                         vector<int> dist(n,INT_MAX);
                         dist[i]=0;
                         queue<pair<int,int>> q;
                         q.push({i,0});
                         while(!q.empty())
                         {
                             auto ij=q.front();
                             q.pop();
                             int node=ij.first;
                             int cost=ij.second;
                             for(auto it:adj[node])
                             {
                                 if(dist[it.first]>cost+it.second && (cost+it.second)<=distanceThreshold)
                                 {
                                     dist[it.first]=cost+it.second;
                                     q.push({it.first,cost+it.second});
                                 }
                             }
       
                             }
                             ans.push_back(dist);
                         }
                     int mini=INT_MAX,rnode=0;
                     vector<int> ans1;
                    for(int i=0;i<n;i++)
                    {
                        int count=0;
                        for(auto it: ans[i])
                        {
                            if(it!=INT_MAX)
                            {
                                count++;
                            }
                        }
                      
                        ans1.push_back(count);
                    }
                    for(int i=0;i<n;i++)
                    {
                        if(mini>=ans1[i])
                        {
                            mini=ans1[i];
                            rnode=i;
                        }
                    }
                     return rnode;
                 }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends