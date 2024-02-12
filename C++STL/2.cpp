#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    deque<int> dq;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int condition;
        cin >> condition;
        switch (condition)
        {
        case 0:
        {
            int d, x;
            cin >> d >> x;
            if (!d)
                dq.push_front(x);
            else
                dq.push_back(x);
            break;
        }
        case 1:
        {
            int p;
            cin >> p;
            cout << dq[p] << endl;
            break;
        }
        case 2:
        {
            int d;
            cin >> d;
            if (!d)
                dq.pop_front();
            else
                dq.pop_back();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
