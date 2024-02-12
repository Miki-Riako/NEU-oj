#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string str;
int m, h;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        queue<char> q;
        cin >> str;
        if (str == "-")
            break;
        cin >> m;
        for (int i = 0; i < str.size(); ++i)
            q.push(str[i]);
        for (int i = 0; i < m; ++i) {
            cin >> h;
            for (int j = 0; j < h; ++j) {
                q.push(q.front());
                q.pop();
            }
        }
        while (!q.empty()) {
            cout << q.front();
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
