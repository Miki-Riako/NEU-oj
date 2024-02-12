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
        int k;
        cin >> k;
        auto it = equal_range(a.begin(), a.end(), k);
        if (it.first == a.end())
            cout << n << " ";
        else
            cout << it.first - a.begin() << " ";
        if (it.second == a.end())
            cout << n << endl;
        else
            cout << it.second - a.begin() << endl;
    }
    return 0;
}
