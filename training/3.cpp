#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int t;
long long y, x;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> y >> x;
        if (x > y) {
            if (x % 2)
                cout << x * x - y + 1 << endl;
            else
                cout << (x - 1) * (x - 1) + y<< endl;
        } else if (x < y) {
            if (y % 2)
                cout << (y - 1) * (y - 1) + x << endl;
            else
                cout << y * y - x + 1<< endl;   
        } else
            cout << x * x - x + 1 << endl;
    }
    return 0;
}
