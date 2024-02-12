#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
string a;
string b;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int scoreA = 0;
    int scoreB = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        bool flag = false;
        for (int i = 0, j = 0; a[i] != '\0' || b[j] != '\0'; ++i, ++j) {
            if (a[i] > b [i]) {
                scoreA += 3;
                flag = true;
                break;
            }
            else if (a[i] < b[i]) {
                scoreB += 3;
                flag = true;
                break;
            }
        }
        if (!flag) {
            ++scoreA;
            ++scoreB;
        }
    }
    cout << scoreA << " " << scoreB << endl;
    return 0;
}
