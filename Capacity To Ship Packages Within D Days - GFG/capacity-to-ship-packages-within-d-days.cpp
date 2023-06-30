//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool ispossible(int weights[],int N, int d,int mid){

    int days=1;

    int sum=0;

    for(int i=0;i<N;i++){

        if(sum+weights[i]<=mid){

            sum+=weights[i];

        }

        else{

            sum=weights[i];    //us din ka ho gaya capacity

            days++;  //increasing days

        }

    }    

    if(days<=d){

        return true;

 

    }else{

        return false;

    }

     

}
    int leastWeightCapacity(int weights[], int N, int d) {
        // code here
        int maxi=-1;

    int sum =0;

    

    for(int i=0;i<N;i++){

    maxi= max(maxi,weights[i]);

    sum+=weights[i];

    }

    int s=maxi;

    int e= sum;

int mid=s+(e-s)/2;

int ans=-1;

    while(s<=e){

 

        if(ispossible(weights,N,d,mid)){

            ans=mid;

            e=mid-1; 

        }

        else{

            s=mid+1;

        }

        mid=s+(e-s)/2;

    }

    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends