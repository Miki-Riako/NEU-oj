#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string str;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        if (isupper(str[i]))
            cout << char(tolower(str[i]));
        else if (islower(str[i]))
            cout << char(toupper(str[i]));
        else
            cout << str[i];
    }
    cout << endl;
    return 0;
}
