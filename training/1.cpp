#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    while (true) {
        cout << n;
        if (n == 1) {
            cout << endl;
            break;
        } else
            cout << " ";
        if (n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
    }
    return 0;
}
