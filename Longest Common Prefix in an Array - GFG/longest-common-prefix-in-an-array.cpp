//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
struct Node {
    Node *links[26]; 
    bool flag = false; 
    
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'a']; 
    }
    void put(char ch, Node* node) {
        links[ch-'a'] = node; 
    }
    void setEnd() {
        flag = true; 
    }
    bool isEnd() {
        return flag; 
    }
}; 
class Trie {
    private: Node *root; 
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *node = root;
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node()); 
            }
            node = node->get(word[i]); 
        }
        node->setEnd(); 
    }
    bool checkIfAllPrefixExists(string word) {
        Node *node = root;
        bool flag = true; 
        for(int i = 0;i<word.size();i++) {
            if(node->containsKey(word[i])) {
                node = node->get(word[i]); 
                flag = flag & node->isEnd(); 
            }
            else {
                return false; 
            } 
        }
        return flag; 
    }
};
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr, arr+N);
        string first = arr[0];
        string last = arr[N-1];
        string ans = "";
        for(int i = 0; i<arr[0].length(); i++){
            if(first[i] == last[i]) ans += first[i];
            else break;
        }
        if(ans == "") return "-1";
        else return ans;
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends