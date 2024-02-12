#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int s;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    cout << s / 3600 << ":" << (s % 3600) / 60 << ":" << s % 60 << endl;
    return 0;
}
