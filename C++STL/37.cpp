#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned int x;
    cin >> x;
    bitset<32> b(x);
    cout << b << endl;
    cout << ~b << endl;
    cout << (b << 1) <<endl;
    cout << (b >> 1) <<endl;
    return 0;
}
