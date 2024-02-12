#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int up, down, west, east, south, north;
int upNew, downNew, westNew, eastNew, southNew, northNew;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> up >> south >> east >> west >> north >> down;
    cin >> upNew >> southNew >> eastNew >> westNew >> northNew >> downNew;
    map<pair<int, int>, int> mp;
    mp.insert({{up, south}, east});
    mp.insert({{south, down}, east});
    mp.insert({{down, north}, east});
    mp.insert({{north, up}, east});
    mp.insert({{south, up}, west});
    mp.insert({{down, south}, west});
    mp.insert({{north, down}, west});
    mp.insert({{up, north}, west});
    mp.insert({{up, west}, south});
    mp.insert({{west, down}, south});
    mp.insert({{down, east}, south});
    mp.insert({{east, up}, south});
    mp.insert({{west, up}, north});
    mp.insert({{down, west}, north});
    mp.insert({{east, down}, north});
    mp.insert({{up, east}, north});
    mp.insert({{south, east}, up});
    mp.insert({{east, north}, up});
    mp.insert({{north, west}, up});
    mp.insert({{west, south}, up});
    mp.insert({{east, south}, down});
    mp.insert({{north, east}, down});
    mp.insert({{west, north}, down});
    mp.insert({{south, west}, down});
    if (mp[{upNew, southNew}] == eastNew && mp[{southNew, upNew}] == westNew && mp[{upNew, westNew}] == southNew&& mp[{westNew, upNew}] == northNew && mp[{southNew, eastNew}] == upNew && mp[{eastNew, southNew}] == downNew)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
