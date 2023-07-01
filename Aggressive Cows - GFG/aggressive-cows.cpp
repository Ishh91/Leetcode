//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
bool valid(vector<int> &arr, int k,int a)

{

    int n=arr.size();

    int prev=arr[0];

    int cnt=1;

    for(int i=1;i<n;i++)

    {

        if(arr[i]-prev>=a)

        {

            cnt++;

            prev=arr[i];

        }

    }

 

    return cnt>=k;

}
    int solve(int n, int k, vector<int> &arr) {
    
       sort(arr.begin(),arr.end());

    // int n=arr.size();
    int mini=INT_MAX;
    int maxi=arr[n-1]-arr[0];

    for(int i=1;i<n;i++)

      mini=min(mini,arr[i]-arr[i-1]);
    int ans;

    int low=mini,high=maxi;

    while(low<=high)

    {

        int mid=(low+high)/2;

        if(valid(arr,k,mid))

        {

            ans=mid;

            low=mid+1;

        }

        else

         high=mid-1;

    }

    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends