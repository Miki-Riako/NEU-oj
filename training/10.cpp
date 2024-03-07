#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
vector<int> apple;
long long int ans = INT_MAX;
void findMin(int idx, long long int weight1, long long int weight2)
{
    if (idx == n) {
        ans = min(ans, abs(weight1 - weight2));
        return;
    }
    findMin(idx + 1, weight1 + apple[idx], weight2);
    findMin(idx + 1, weight1, weight2 + apple[idx]);
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    apple.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> apple[i];
    findMin(0, 0, 0);
    cout << ans << endl;
    return 0;
}

