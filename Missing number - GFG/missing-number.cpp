//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int a[], int n)
{
     
         int sum=0;
         int rsum=0;
         for(int i=0; i<n-1; i++)
         {
             sum=sum+a[i];
             rsum=rsum+i+1;
         }
         rsum+=n;
         return rsum-sum;
    
    // Your code goes here
}