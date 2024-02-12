#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n >> q;
    deque<int> Q[n];
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
            Q[t].push_back(x);
            break;
        }
        case 1:
        {
            if (Q[t].empty())
                break;
            cout << Q[t].front() << endl;
            break;
        }
        case 2:
        {
            if (Q[t].empty())
                break;
            Q[t].pop_front();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
