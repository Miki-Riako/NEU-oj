#include <bits/stdc++.h>
using namespace std;
void print(vector<int> a)
{
    for (auto &i : a)
    {
        if (i != a.back())
            cout << i << " ";
        else
            cout << i << endl;
    }
}
void next(vector<int> a)
{
    for (int i = a.size() - 1; i > 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            next_permutation(a.begin(), a.end());
            print(a);
            next(a);
            return;
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    print(a);
    next(a);
    return 0;
}
