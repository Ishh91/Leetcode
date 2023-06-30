//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int sumofD(vector<int> &v, int div){
    int sum = 0;
        
        for(int i = 0; i < v.size(); i++){
            sum += ceil((double)v[i] / (double)div);
        }
        
        return sum;
}
    int smallestDivisor(vector<int>& arr, int limit) {
    int low = 1, high = *max_element(arr.begin(),arr.end());
	while(low <= high){
		int mid = (low + high)/2;
		if(sumofD(arr, mid) <= limit){
			high = mid - 1;
		}
		else{
			low = mid+1;
		}
	}
	return low;
        // Write your code here.
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends