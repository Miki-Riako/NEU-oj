#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned int a, b;
    cin >> a >> b;
    bitset<32> binary_a(a);
    bitset<32> binary_b(b);
    cout << (binary_a & binary_b) << endl;
    cout << (binary_a | binary_b) << endl;
    cout << (binary_a ^ binary_b) << endl;
    return 0;
}
