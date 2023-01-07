//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void find(int num, string s){
        if(num == 0){
            cout<<s<<" ";
            return ;
        }
        find(num-1,s+'0');
        if(s.size() == 0 || s.back()!= '1'){
        find(num-1,s+'1');
        }
    }
    void generateBinaryStrings(int& num){
        //Write your code
        find(num,"");
        return;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        // cout << setprecision(9) << obj.switchCase(choice,vec) << endl;
        obj.generateBinaryStrings(n);
        cout << endl;
        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends