#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b;
    if (a < b)
        swap(a, b);
    while (b != 0) {
        swap(a, b);
        b %= a;
    }
    cout << a << endl;
    return 0;
}
