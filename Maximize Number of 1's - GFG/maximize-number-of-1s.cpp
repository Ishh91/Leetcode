//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
         int ans = 0;
        int countZero = 0;
        int j = -1;
        int i=0;
        while(i<n){
            if(arr[i] == 0){
                countZero++;
            }
            
            while(countZero > m){
                j++;
                if(arr[j] == 0) countZero--;
            }
            
            int length = i - j;
            ans = max(ans,length);
            i++;
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends