#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b;
    cout << a / b << " " << a % b << " " << fixed << setprecision(5) << double(a * 1.0 / b) << endl;
    return 0;
}
