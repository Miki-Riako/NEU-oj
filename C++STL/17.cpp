#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    for (auto &i : points)
        cin >> i.first >> i.second;
    sort(points.begin(), points.end(),
    [](pair<int, int> &p1, pair<int, int> &p2)
    {
        if (p1.first == p2.first)
            return p1.second < p2.second;
        else
            return p1.first < p2.first;
    });
    for (auto &i : points)
        cout << i.first << " " << i.second << endl;
    return 0;
}
