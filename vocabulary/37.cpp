#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string str;
int q;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> str;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if (s == "print")
            cout << str.substr(a, b - a + 1) << endl;
        else if (s == "reverse")
            reverse(str.begin() + a, str.begin() + b + 1);
        else if (s == "replace") {
            string newString;
            cin >> newString;
            str.replace(a, b - a + 1, newString);
        }
    }
    return 0;
}
