#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<vector<int> > A(n);
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
            A[t].push_back(x);
            break;
        }
        case 1:
        {
            for (auto i : A[t])
            {
                if (i != A[t].back())
                    cout << i << " ";
                else
                    cout << i;
            }
            cout << endl;
            break;
        }
        case 2:
        {
            A[t].clear();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
