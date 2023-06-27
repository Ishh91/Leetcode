//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int n, vector<int>& arr, int k) {
        // Code here
        
    int l = 0; int h = n-1;
    while(l<= h){
        int m = (l+h)/2;
        if(arr[m] == k) return true;
        if(arr[m] == arr[l] && arr[m] == arr[h])
        {
            l +=1 ;
            h -= 1;
            continue;
        }
        if(arr[l] <= arr[m]){
            if(arr[l]<= k && k<= arr[m]){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        else{
            if(arr[h]>= k && k>= arr[m]){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
    }
    return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends