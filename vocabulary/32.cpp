#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
vector<string> str;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        string temp;
        getline(cin, temp);
        if (temp == "")
            break;
        str.push_back(temp);
    }
    vector<int> alphabet(26);
    for (auto &i : str) {
        for (int j = 0; j < i.size(); ++j) {
            if (isupper(i[j]))
                ++alphabet[i[j] - 'A'];
            else if (islower(i[j]))
                ++alphabet[i[j] - 'a'];
        }
    }
    for (char i = 'a'; i < 'z' + 1; ++i)
        cout << i << " : " << alphabet[i - 'a'] << endl;
    return 0;
}
