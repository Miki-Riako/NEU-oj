#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void) {
    ios::sync_with_stdio();
    cin.tie(0);
    cin >> n;
    int a, b;
    cin >> a >> b;
    int min = a > b ? b : a;
    int max = b - a;
    for (int i = 2; i < n; ++i) {
        int temp;
        cin >> temp;
        if (temp - min > max)
            max = temp - min;
        if (temp < min)
            min = temp;
    }
    cout << max << endl;
    return 0;
}
