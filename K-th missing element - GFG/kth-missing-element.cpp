//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
     int sum = a[0], ct = 0;
    
    for(int i = 0; i < n; i++){
        if(a[i] == sum ){
        sum++;
        }else{
        ct++;
          if(ct == k){
            return sum;
          }
        sum++;
        i--;
        }
    }
  return -1;
}
