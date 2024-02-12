#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> s(k);
    for (int i = 0; i < k; ++i)
        cin >> s[i];
    for (int i = 0; i < (1 << n); ++i)
    {
        vector<int> temp;
        for (int j = 0; j < n; ++j)
            if (i & (1 << j))
                temp.push_back(j);
        if (includes(temp.begin(), temp.end(), s.begin(), s.end()))
        {
            cout << i << ":";
            for (auto &it : temp)
                cout << " " << it;
            cout << endl;
        }
    }
    return 0;
}
