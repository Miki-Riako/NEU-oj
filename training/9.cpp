#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string str;
set<string> result;
void permute(string &str, int start)
{
    if (start == str.size()) {
        result.insert(str);
        return;
    }
    for (int i = start; i < str.size(); ++i) {
        swap(str[start], str[i]);
        permute(str, start + 1);
        swap(str[start], str[i]);
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> str;
    sort(str.begin(), str.end());
    permute(str, 0);
    cout << result.size() << endl;
    for (const string &s : result)
        cout << s << endl;
    return 0;
}
