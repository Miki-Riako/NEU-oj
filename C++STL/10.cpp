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
        int condition, b, c;
        cin >> condition >> b >> c;
        switch (condition)
        {
        case 0:
        {
            cout << *min_element(&A[b], &A[c]) << endl;
            break;
        }
        case 1:
        {
            cout << *max_element(&A[b], &A[c]) << endl;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
