#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
        cin >> i;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int b, e, k;
        int counter = 0;
        cin >> b >> e >> k;
        for (auto it = &A[b]; it != &A[e]; it++)
            if (*it == k)
                counter++;
        cout << counter << endl;
    }
    return 0;
}
