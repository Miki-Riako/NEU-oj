#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string a;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 0;
    cin >> a;
    while (true) {
        string t;
        cin >> t;
        if (t == "END_OF_TEXT")
            break;
        for (int i = 0; i < t.size(); ++i) {
            if (isupper(t[i]))
                t[i] = tolower(t[i]);
        }
        if (a == t)
            ++n;
    }
    cout << n << endl;
    return 0;
}
