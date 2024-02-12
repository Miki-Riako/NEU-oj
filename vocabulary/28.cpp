#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int r, c;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> arr[i][j];
    vector<int> rowSum(r), colSum(c);
    int sum = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << arr[i][j] << " ";
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
            sum += arr[i][j];
        }
        cout << rowSum[i] << endl;
    }
    for (int i = 0; i < c; ++i)
        cout << colSum[i] << " ";
    cout << sum << endl;
    return 0;
}
