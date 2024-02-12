#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (i != a.size())
            cout << a[i] << " ";
        else
            cout << a[i] << endl;
    }
    return 0;
}
