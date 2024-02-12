#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    long long int sum = 0;
    vector<long long int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << " " << sum << endl;
    return 0;
}
