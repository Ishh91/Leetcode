//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int a[], int n, int x) {
    // code here
    int f{ -1 }, c( INT_MAX );
    while ( n-- )
        if ( a[ n ] == x ) return { x, x };
        else if ( a[ n ] < x && a[ n ] > f ) f = a[ n ];
        else if ( a[ n ] > x && a[ n ] < c ) c = a[ n ];
    return { f, c == INT_MAX ? -1 : c };
}