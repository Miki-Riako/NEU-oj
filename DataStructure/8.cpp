#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
vector<int> a;
int cnt = 0;
void insertSort(vector<int> &a, int g) {
    for (int i = g; i < n; ++i) {
        int v = a[i];
        int j = i - g;
        while (j >= 0 && a[j] > v) {
            a[j + g] = a[j];
            j = j - g;
            ++cnt;
        }
        a[j + g] = v;
    }
}
void shellSort(vector<int> &a, vector<int> &G) {
    for (int h = 1; h <= n; h = 3 * h + 1)
        G.push_back(h);
    reverse(G.begin(), G.end());
    for (int i = 0; i < G.size(); ++i)
        insertSort(a, G[i]);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    vector<int> G;
    shellSort(a, G);
    cout << G.size() << endl;
    for (int i = 0; i < G.size(); ++i) {
        if (i < G.size() - 1)
            cout << G[i] << " ";
        else
            cout << G[i] << endl << cnt << endl;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}
