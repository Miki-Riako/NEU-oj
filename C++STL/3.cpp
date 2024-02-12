#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    list<int> L;
    list<int>::iterator it = L.end();
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
            int x;
            cin >> x;
            it = L.insert(it, x);
            break;
        }
        case 1:
        {
            int d;
            cin >> d;
            it = next(it, d);
            break;
        }
        case 2:
        {
            if (it == L.end())
                break;
            list<int>::iterator temp = L.erase(it);
            if (temp == L.end())
                it = L.end();
            else
                it = temp;
            break;
        }
        default:
            break;
        }
    }
    for (auto &i : L)
        cout << i << endl;
    return 0;
}
