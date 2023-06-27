//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   int l = 0, h = n-1;
	int ans = INT_MAX;
    int ind = -1;
	while(l<=h){
		int m = (l + h)/2;
        if(arr[l] <= arr[h]){
            if(arr[l]<ans){
                ind = l;
                ans = arr[l];
            }
        }
		if(arr[l]<=arr[m]){
			if(arr[l]<ans){
                ind = l;
                ans = arr[l];
            }
			l = m+1;
		}
		else{
			h = m-1;
			if(arr[m]<ans){
                ind = m;
                ans = arr[m];
            }
			
		}
	}
	return ind;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends