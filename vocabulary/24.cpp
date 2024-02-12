#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, b, f, r, v;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<vector<vector<int> > > building(4, vector<vector<int> >(3, vector<int>(10)));
    for (int i = 0; i < n; ++i) {
        cin >> b >> f >> r >> v;
        building[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 10; ++k) {
                if (k != 9)
                    cout << building[i][j][k] << " ";
                else
                    cout << building[i][j][k] << endl;
            }
        if (i != 3)
            for (int j = 0; j < 20; ++j)
                cout << "#";
        cout << endl;
    }
    return 0;
}
