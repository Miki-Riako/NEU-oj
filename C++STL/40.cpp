#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, b, q, query_i, m;
    bitset<64> state = 0;
    cin >> n;
    vector<bitset<64> > masks(n);
    for (int i = 0; i < n; ++i)
    {
        masks[i].reset();
        cin >> k;
        for (int j = 0; j < k; ++j)
        {
            cin >> b;
            masks[i][b] = 1;
        }
    }
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> query_i >> m;
        switch (query_i)
        {
            case 0:
            {
                cout << state[m] << endl;
                break;
            }
            case 1:
            {
                state |= masks[m];
                break;
            }
            case 2:
            {
                state &= ~masks[m];
                break;
            }
            case 3:
            {
                state ^= masks[m];
                break;
            }
            case 4:
            {
                cout << (((state & masks[m]) == masks[m]) ? 1 : 0) << endl;
                break;
            }
            case 5:
            {
                cout << (((state & masks[m]).any()) ? 1 : 0) << endl;
                break;
            }
            case 6:
            {
                cout << (((state & masks[m]) == 0) ? 1 : 0) << endl;
                break;
            }
            case 7:
            {
                cout << (state & masks[m]).count() << endl;
                break;
            }
            case 8:
            {
                cout << (state & masks[m]).to_ullong() << endl;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}
