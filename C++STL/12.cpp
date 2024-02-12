#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    cin >> m;
    vector<int> b(m);
    for (auto &i : b)
        cin >> i;
    int bigger = max(n, m);
    int flag = 0;
    for (int i = 0; i < bigger; i++)
    {
        if (b[i] > a[i])
        {
            flag = 1;
            break;
        }
        else if (a[i] > b[i])
            break;
    }
    cout << flag << endl;
    return 0;
}
