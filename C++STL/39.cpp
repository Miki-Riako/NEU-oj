#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q, query_i, i;
    bitset<64> state = 0;
    cin >> q;
    for (int j = 0; j < q; ++j)
    {
        cin >> query_i;
        if (query_i == 0 || query_i == 1  || query_i == 2 || query_i == 3)
            cin >> i;
        switch (query_i)
        {
            case 0:
            {
                cout << (state[i] ? 1 : 0) << endl;
                break;
            }
            case 1:
            {
                state[i] = 1;
                break;
            }
            case 2:
            {
                state[i] = 0;
                break;
            }
            case 3:
            {
                state.flip(i);
                break;
            }
            case 4:
            {
                cout << ((state == ULLONG_MAX) ? 1 : 0) << endl;
                break;
            }
            case 5:
            {
                cout << ((state.any()) ? 1 : 0) << endl;
                break;
            }
            case 6:
            {
                cout << ((state.none()) ? 1 : 0) << endl;
                break;
            }
            case 7:
            {
                cout << state.count() << endl;
                break;
            }
            case 8:
            {
                cout << state.to_ullong() << endl;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}
