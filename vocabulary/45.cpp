#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int up[n], down[n], west[n], east[n], south[n], north[n];
    for (int i = 0; i < n; ++i)
        cin >> up[i] >> south[i] >> east[i] >> west[i] >> north[i] >> down[i];
    string yes = "Yes";
    for (int i = 0; i < n; ++i) {
        map<pair<int, int>, int> mp;
        mp.insert({{up[i], south[i]}, east[i]});
        mp.insert({{south[i], down[i]}, east[i]});
        mp.insert({{down[i], north[i]}, east[i]});
        mp.insert({{north[i], up[i]}, east[i]});
        mp.insert({{south[i], up[i]}, west[i]});
        mp.insert({{down[i], south[i]}, west[i]});
        mp.insert({{north[i], down[i]}, west[i]});
        mp.insert({{up[i], north[i]}, west[i]});
        mp.insert({{up[i], west[i]}, south[i]});
        mp.insert({{west[i], down[i]}, south[i]});
        mp.insert({{down[i], east[i]}, south[i]});
        mp.insert({{east[i], up[i]}, south[i]});
        mp.insert({{west[i], up[i]}, north[i]});
        mp.insert({{down[i], west[i]}, north[i]});
        mp.insert({{east[i], down[i]}, north[i]});
        mp.insert({{up[i], east[i]}, north[i]});
        mp.insert({{south[i], east[i]}, up[i]});
        mp.insert({{east[i], north[i]}, up[i]});
        mp.insert({{north[i], west[i]}, up[i]});
        mp.insert({{west[i], south[i]}, up[i]});
        mp.insert({{east[i], south[i]}, down[i]});
        mp.insert({{north[i], east[i]}, down[i]});
        mp.insert({{west[i], north[i]}, down[i]});
        mp.insert({{south[i], west[i]}, down[i]});
        for (int j = i + 1; j < n; ++j)
            if (mp[{up[j], south[j]}] == east[j] && mp[{south[j], up[j]}] == west[j] && mp[{up[j], west[j]}] == south[j]&& mp[{west[j], up[j]}] == north[j] && mp[{south[j], east[j]}] == up[j] && mp[{east[j], south[j]}] == down[j])
                yes = "No";
    }
    cout << yes << endl;
    return 0;
}
