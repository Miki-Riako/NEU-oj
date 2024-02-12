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
    int max = *max_element(s.begin(), s.end()) + 1;
    for (int i = 0; i < (1 << max); ++i)
    {
        vector<int> temp;
        for (int j = 0; j < max; ++j)
            if (i & (1 << j))
                temp.push_back(j);
        if (includes(s.begin(), s.end(), temp.begin(), temp.end()))
        {
            cout << i << ":";
            for (auto &it : temp)
                cout << " " << it;
            cout << endl;
        }
    }
    return 0;
}
