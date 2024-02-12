#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    vector<vector<int> > matrix(n, vector<int>(m));
    vector<int> v(m);
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];
    for (int i = 0; i < m; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            ans[i] += matrix[i][j] * v[j];
        cout << ans[i] << endl;
    }
    return 0;
}
