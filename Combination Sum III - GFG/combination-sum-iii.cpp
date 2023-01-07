//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void solve(int k,int n,int i,int j,vector<vector<int>> &ans,vector<int> &s){
      int m = s.size();
      
      if(m==k && n == 0){
          ans.push_back(s);
          return ;
      }
      if(i<=n){
          for(int ind = i;ind<=j;ind++){
              s.push_back(ind);
              solve(k,n-ind,ind+1,j,ans,s);
              s.pop_back();
          }
      }
  }
    vector<vector<int>> combinationSum(int k, int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> ds;
        solve(k,n,1,9,ans,ds);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends