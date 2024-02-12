#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b, c;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0)
            ++sum;
    }
    cout << sum << endl;
    return 0;
}
