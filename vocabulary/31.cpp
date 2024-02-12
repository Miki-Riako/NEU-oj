#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string x;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> x;
        if (x == "0")
            break;
        int sum = 0;
        for (int i = 0; i < x.size(); ++i)
            sum += x[i] - '0';
        cout << sum << endl;
    }
    return 0;
}
