#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    map<string, int> m;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int query;
        string key;
        cin >> query >> key;
        switch (query)
        {
        case 0:
        {
            int val;
            cin >> val;
            m[key] = val;
            break;
        }
        case 1:
        {
            map<string, int>::iterator it = m.find(key);
            if (it != m.end())
                cout << it->second << endl;
            else
                cout << 0 << endl;
            break;
        }
        case 2:
        {
            m.erase(key);
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
