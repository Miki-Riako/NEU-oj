#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
vector<int> a;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
        for (int i = 0; i < n; ++i) {
            if (i < n - 1)
                cout << a[i] << " ";
            else
                cout << a[i] << endl;
        }
    }
    return 0;
}
