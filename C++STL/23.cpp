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
        int k, j;
        cin >> k;
        auto it = lower_bound(a.begin(), a.end(), k);
        if (it == a.end())
            cout << n << endl;
        else
            cout << it - a.begin() << endl;
    }
    return 0;
}
