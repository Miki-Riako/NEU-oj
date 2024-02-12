#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<vector<bool> > v(4, vector<bool>(13));
    for (int i = 0; i < n; ++i) {
        int a, b;
        char c;
        cin >> c >> b;
        switch (c) {
        case 'S':
            a = 0;
            break;
        case 'H':
            a = 1;
            break;
        case 'C':
            a = 2;
            break;
        case 'D':
            a = 3;
            break;
        default:
            break;
        }
        v[a][b - 1] = true;
    }
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 13; ++j)
            if (!v[i][j]) {
                switch (i) {
                case 0:
                    cout << "S " << j + 1 << endl;
                    break;
                case 1:
                    cout << "H " << j + 1 << endl;
                    break;
                case 2:
                    cout << "C " << j + 1 << endl;
                    break;
                case 3:
                    cout << "D " << j + 1 << endl;
                    break;
                default:
                    break;
                }
            }
    return 0;
}
