#include <bits/stdc++.h>
using namespace std;
void add_value(map<int, int> &m, int x, int y);
int find_value(map<int, int> &m, int x);
void print_contents(map<int, int> &m);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m;
        int q;
        cin >> q;
        while (q--)
        {
            char c;
            cin >> c;
            if (c == 'a')
            {
                int x, y;
                cin >> x >> y;
                add_value(m, x, y);
            }
            if (c == 'b')
            {
                int y;
                cin >> y;
                cout << find_value(m, y) << " ";
            }
            if (c == 'c')
            {
                print_contents(m);
            }
        }
        cout << endl;
    }
    return 0;
}
void add_value(map<int, int> &m, int x, int y)
{
    m.insert({x, y});
    m[x] = y;
    
}
int find_value(map<int, int> &m, int x)
{
    auto it = m.find(x);
    if (it != m.end())
    {
        return m[x];
    }
    else
    {
        return -1;
    }
    // Your code here
}
void print_contents(map<int, int> &m)
{
    for (auto it : m)
    {
        cout << it.first << " " << it.second << " ";
    }
}