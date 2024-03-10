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
    for (int i = 0; i < n; ++i) {
        int mini = i;
        for (int j = i; j < n; ++j)
            if (a[j] < a[mini])
                mini = j;
        if (a[i] != a[mini]) {
            swap(a[i], a[mini]);
            ++cnt;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (i < n - 1)
            cout << a[i] << " ";
        else
            cout << a[i] << endl << cnt << endl;
    }
    return 0;
}
