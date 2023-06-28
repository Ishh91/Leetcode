//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        if( n == 1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];
	int l = 1, h =n-1;
	while(l<=h){
		int m = (l+h)/2;
		if(arr[m] != arr[m+1] && arr[m] != arr[m-1]) return arr[m];
		if((m%2 ==1 && arr[m-1] == arr[m]) ||(m%2 == 0 && arr[m] == arr[m+1])) l = m + 1;
		else h = m-1;
	}
	return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends