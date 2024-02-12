#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q, x;
        cin >> q >> x;
        switch (q)
        {
        case 0:
        {
            s.insert(x);
            cout << s.size() << endl;
            break;
        }
        case 1:
        {
            cout << s.count(x) << endl;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
