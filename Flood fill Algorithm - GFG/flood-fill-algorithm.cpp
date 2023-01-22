//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  
public:
    int rowDir[4]={-1,0,1,0};

int colDir[4]={0,-1,0,1};
    
    void dfs(int sr, int sc, int newColor, int oldColor, vector<vector<int>>& image)
    {
        int n=image.size();
        int m=image[0].size();
        image[sr][sc]=newColor;
        
        for(int i=0; i<4; i++)
        {
            int nrow=sr+rowDir[i];
            int ncol=sc+colDir[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==oldColor && image[nrow][ncol]!=newColor)
            {
                dfs(nrow, ncol, newColor, oldColor, image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
        return image;
        
        dfs(sr, sc, newColor, image[sr][sc], image);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends