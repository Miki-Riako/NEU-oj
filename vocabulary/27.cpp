#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, x;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> n >> x;
        if (n == 0 && x == 0)
            break;
        int counter = 0;
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            if (i > x)
                break;
            for (int j = i + 1; j <= n; ++j) {
                if (i + j > x)
                    break;
                for (int k = j + 1; k <= n; ++k) {
                    if (i + j + k > x)
                        break;
                    else if (i + j + k == x)
                        ++counter;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
