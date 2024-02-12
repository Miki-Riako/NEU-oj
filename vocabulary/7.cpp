#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b;
    string operation;
    if (a > b)
        operation = "a > b";
    else if (a < b)
        operation = "a < b";
    else
        operation = "a == b";
    cout << operation << endl;
    return 0;
}
