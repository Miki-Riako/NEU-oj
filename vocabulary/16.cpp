#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a, b;
char op;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> a >> op >> b;
        if (op == '+')
            cout << a + b << endl;
        else if (op == '-')
            cout << a - b << endl;
        else if (op == '*')
            cout << a * b << endl;
        else if (op == '/')
            cout << a / b << endl;
        else
            break;
    }
    return 0;
}
