#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q, x;
        cin >> q >> x;
        switch (q)
        {
        case 0:
        {
            s.insert(x);
            cout << s.size() << endl;
            break;
        }
        case 1:
        {
            cout << s.count(x) << endl;
            break;
        }
        case 2:
        {
            s.erase(x);
            break;
        }
        case 3:
        {
            int end;
            cin >> end;
            auto endBound = s.upper_bound(end);
            for (auto it = s.lower_bound(x); it != endBound; it++)
                cout << *it << endl;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
