#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    set<int> a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }
    vector<int> result;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    sort(result.begin(), result.end());
    for (auto &i : result)
        cout << i << endl;
    return 0;
}
