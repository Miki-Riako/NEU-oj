#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
vector<int> a;
int cnt = 0;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++cnt;
            }
    for (int i = 0; i < n; ++i) {
        if (i < n - 1)
            cout << a[i] << " ";
        else
            cout << a[i] << endl << cnt << endl;
    }
    return 0;
}
