#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int b, m, e;
        cin >> b >> m >> e;
        rotate(a.begin() + b, a.begin() + m, a.begin() + e);
    }
    for (auto &i : a)
    {
        if (i != a.back())
            cout << i << " ";
        else
            cout << i << endl;
    }
    return 0;
}
