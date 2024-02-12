#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n >> q;
    list<int> L[n] = {};
    for (int i = 0; i < q; i++)
    {
        int condition;
        cin >> condition;
        switch (condition)
        {
        case 0:
        {
            int t, x;
            cin >> t >> x;
            L[t].push_back(x);
            break;
        }
        case 1:
        {
            int t;
            cin >> t;
            if (L[t].size() != 0)
                for (auto it = L[t].begin(); it != L[t].end(); it++)
                {
                    if (next(it) != L[t].end())
                        cout << *it << " ";
                    else
                        cout << *it;
                }
            cout << endl;
            break;
        }
        case 2:
        {
            int s, t;
            cin >> s >> t;
            if (L[s].empty())
                break;
            L[t].splice(L[t].end(), L[s]);
            L[s].clear();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
