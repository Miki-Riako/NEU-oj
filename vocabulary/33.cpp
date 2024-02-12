#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string s, p;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s >> p;
    string flag = "No";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == p[0]) {
            int ptr = i;
            int target = 0;
            while (true) {
                if (target == p.size()) {
                    flag = "Yes";
                    break;
                }
                if (s[ptr++] != p[target++])
                    break;
                if (ptr == s.size())
                    ptr = 0;
            }
        }
    }
    cout << flag << endl;
    return 0;
}
