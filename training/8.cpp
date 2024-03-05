#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    long long int factor = 1;
    int two = 0;
    int zero = 0;
    for (int i = 1; i <= n; ++i) {
        factor = i;
        while (true) {
            if (!(factor % 5)) {
                ++zero;
                factor /= 5;
            } else
                break;
        }
    }
    cout << zero << endl;
    return 0;
}
