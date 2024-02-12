#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int h, w;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> h >> w;
        if (h == 0 && w == 0)
            break;
        else {
            for (int i = 0; i < h; ++i) {
                for (int j = 0; j < w; ++j)
                    cout << (((i + j) % 2 == 0) ? "#" : ".");
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
