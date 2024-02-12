#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; ++i)
        s.push_back(i);
    for (int i = 0; i < (1 << n); ++i)
    {
        bitset<32> b(i);
        cout << i << ":";
        for (int j = 0; j < n; ++j)
            if (b[j])
                cout << " " << s[j];
        cout << endl;
    }
    return 0;
}
