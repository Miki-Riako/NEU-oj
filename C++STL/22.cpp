#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >>n;
    vector<int> v1(n);
    for (auto &i : v1)
        cin >> i;
    cin >> m;
    vector<int> v2(m);
    for (auto &i : v2)
        cin >> i;
    if (includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
