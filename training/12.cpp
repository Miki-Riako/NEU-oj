#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    if (n == 1)
        cout << "1" << endl;
    else if (n < 4)
        cout << "NO SOLUTION" << endl;
    else {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2) {
            cout << i;
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
