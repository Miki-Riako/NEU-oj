#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (long long int i = 1; i <= n; ++i) {
        long long int total = i * i * (i * i - 1) / 2;
        long long int attack = 2 * (i - 1) * (i - 2);
        cout << total - 2 * attack << endl;
    }
    return 0;
}
