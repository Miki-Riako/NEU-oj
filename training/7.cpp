#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
const int MOD = 1e9 + 7;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    long long int ans = 1;
    for (int i = 0; i < n; ++i)
        ans = (ans * 2) % MOD;
    cout << ans << endl;
    return 0;
}
