#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
vector<int> v(3);
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; ++i) {
        if (i != 2)
            cout << v[i] << " ";
        else
            cout << v[i] << endl;
    }
    return 0;
}
