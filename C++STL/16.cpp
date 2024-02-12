#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    a.erase(unique(a.begin(), a.end()), a.end());
    for (auto &i : a)
    {
        if (i != a.back())
            cout << i << " ";
        else
            cout << i << endl;
    }
    return 0;
}
