#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, l;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> l;
    int a[n][m];
    int b[m][l];
    long long int c[n][l];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < l; ++j)
            cin >> b[i][j];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < l; ++j) {
            c[i][j] = 0;
            for (int k = 0; k < m; ++k)
                c[i][j] += a[i][k] * b[k][j];
            if (j != l - 1)
                cout << c[i][j] << " ";
            else
                cout << c[i][j] << endl;
        }
    return 0;
}
