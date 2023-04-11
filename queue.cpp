//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void push(queue<int> &q, int x);

int pop(queue<int> &q);
int getSize(queue<int> &q);

int getBack(queue<int> &q);

int getFront(queue<int> &q);
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        queue<int> s;
        int q;
        cin >> q;
        while (q--)
        {
            char c;
            cin >> c;
            if (c == 'a')
            {
                int x;
                cin >> x;
                push(s, x);
            }
            if (c == 'b')
            {
                cout << pop(s) << " ";
            }
            if (c == 'c')
            {
                cout << getSize(s) << " ";
            }
            if (c == 'd')
            {
                cout << getFront(s) << " ";
            }
            if (c == 'e')
            {
                cout << getBack(s) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
void push(queue<int> &q, int x)
{
    q.push(x);
    // Your code here
}
int pop(queue<int> &q)
{
    if (!q.empty())
    {
        int elm = q.front();
        q.pop();
        return elm;
    }
    else
        return -1;

    // Your code here
}

int getSize(queue<int> &q)
{
    return q.size();
    // Your code here
}

int getBack(queue<int> &q)
{
    if (!q.empty())
    {
        return q.back();
    }
    else
        return -1;
    // Your code here
}

int getFront(queue<int> &q)
{
    if (!q.empty())
    {
        return q.front();
    }
    else
        return -1;
    // Your code here
}
