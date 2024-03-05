#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int move = 0;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n - 1; ++i)
        if (a[i] > a[i + 1]) {
            move += a[i] - a[i + 1];
            a[i + 1] = a[i]; 
        }
    cout << move << endl;
    return 0;
}
