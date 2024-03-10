#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int counts = 0;
bool prime(const int &p) {
    if (p <= 3)
        return true;
    if (!(p % 2) || !(p % 3))
        return false;
    for (int i = 5; i * i <= p; i += 6)
        if (!(p % i) || !(p % (i + 2)))
            return false;
    return true;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        if (prime(p))
            ++counts;
    }
    cout << counts << endl;
    return 0;
}
