#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int W, H, x, y, r;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> W >> H >> x >> y >> r;
    bool flag = true;
    if (x + r > W)
        flag = false;
    if (y + r > H)
        flag = false;
    if (x - r < 0)
        flag = false;
    if (y - r < 0)
        flag = false;
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
