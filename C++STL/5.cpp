#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n >> q;
    stack<int> S[n];
    for (int i = 0; i < q; i++)
    {
        int condition, t;
        cin >> condition >> t;
        switch (condition)
        {
        case 0:
        {
            int x;
            cin >> x;
            S[t].push(x);
            break;
        }
        case 1:
        {
            if (S[t].empty())
                break;
            cout << S[t].top() << endl;
            break;
        }
        case 2:
        {
            if (S[t].empty())
                break;
            S[t].pop();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
