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
void prev(vector<int> a)
{
    for (int i = a.size() - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            prev_permutation(a.begin(), a.end());
            print(a);
            return;
        }
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
            return;
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    prev(a);
    print(a);
    next(a);
    return 0;
}
