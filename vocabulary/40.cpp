#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        double average = (double)accumulate(arr.begin(), arr.end(), 0) / n;
        double sum = 0;
        for (int i = 0; i < n; ++i)
            sum += pow(arr[i] - average, 2);
        double sigma = sqrt(sum / n);
        cout << fixed << setprecision(8) << sigma << endl;
    }
    return 0;
}
