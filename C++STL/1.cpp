#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> v;
    int chance;
    cin >> chance;
    for (int i = 0; i < chance; i++)
    {
        int condition;
        cin >> condition;
        switch (condition)
        {
        case 0:
        {
            int num;
            cin >> num;
            v.push_back(num);
            break;
        }
        case 1:
        {
            int index;
            cin >> index;
            cout << v[index] << endl;
            break;
        }
        case 2:
        {
            v.pop_back();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
