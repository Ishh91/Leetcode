#include <bits/stdc++.h>
using namespace std;

void add_value(unordered_map<int, int> &m, int x, int y);

int find_value(unordered_map<int, int> &m, int x);

int getSize(unordered_map<int, int> &m);

void removeKey(unordered_map<int, int> &m, int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> m;
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
                cout << getSize(m) << " ";
            }
            if (c == 'd')
            {
                int x;
                cin >> x;
                removeKey(m, x);
            }
        }
        cout << endl;
    }
    return 0;
}
void add_value(unordered_map<int, int> &m, int x, int y)
{
    m[x] = y;
}
int find_value(unordered_map<int, int> &m, int x)
{
    if (m.find(x) != m.end())
    {
        return m[x];
    }
    return -1;
    // Your code here
}
int getSize(unordered_map<int, int> &m)
{
    return m.size();
}
void removeKey(unordered_map<int, int> &m, int x)
{
    m.erase(x);
}
