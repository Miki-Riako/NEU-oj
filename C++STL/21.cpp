#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        if (binary_search(a.begin(), a.end(), k))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
