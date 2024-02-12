#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    multimap<string, int> m;
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
            m.insert(pair<string, int>(key, val));
            break;
        }
        case 1:
        {
            auto range = m.equal_range(key);
            for (auto it = range.first; it != range.second; ++it)
                cout << it->second << endl;
            break;
        }
        case 2:
        {
            m.erase(key);
            break;
        }
        case 3:
        {
            string end;
            cin >> end;
            auto endBound = m.upper_bound(end);
            for (auto it = m.lower_bound(key); it != endBound; it++)
                cout << it->first << " " << it->second << endl;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
