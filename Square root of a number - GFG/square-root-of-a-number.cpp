//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
       long long int l = 1, h = x/2;
        if(x == 1) return 1;
        while(l<=h){
           long long int m = (l+h)/2;
            if(m*m == x) return m;
            else if(m*m > x) h = m-1;
            else l = m+1;
        }
        return h;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends