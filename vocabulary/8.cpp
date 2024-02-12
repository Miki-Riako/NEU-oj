#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b, c;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b >> c;
    bool flag = true;
    if (a >= b)
        flag = false;
    if (b >= c)
        flag = false;
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
