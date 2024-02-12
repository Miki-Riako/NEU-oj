#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v;
    while (true) {
        int temp;
        cin >> temp;
        if (temp == 0)
            break;
        else
            v.push_back(temp);
    }
    for (int i = 0; i < v.size(); ++i)
        cout << "Case " << i + 1 << ": " << v[i] << endl;
    return 0;
}
