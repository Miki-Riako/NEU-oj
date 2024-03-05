#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    bool yes[n + 1];
    memset(yes, false, sizeof(yes));
    for (int i = 1; i <= n; ++i) {
        int input;
        cin >> input;
        yes[input] = true;
    }
    for (int i = 1; i <= n; ++i)
        if (!yes[i]) {
            cout << i << endl;
            break;
        }
    return 0;
}
