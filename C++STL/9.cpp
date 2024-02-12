#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end()) << endl;
    return 0;
}
