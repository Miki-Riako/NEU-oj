#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int i = 1;
CHECK_NUM:
    int x = i;
    if (x % 3 == 0) {
        printf(" %d", i);
        goto END_CHECK_NUM;
    }
INCLUDE3:
    if (x % 10 == 3) {
        printf(" %d", i);
        goto END_CHECK_NUM;
    }
    x /= 10;
    if (x)
        goto INCLUDE3;
END_CHECK_NUM:
    if (++i <= n)
        goto CHECK_NUM;
    putchar('\n');
    return 0;
}
/*
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int i = 1;
    do {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }
        do {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
            x /= 10;
        } while (x);
    } while (++i <= n);
    cout << endl;
    return 0;
}
*/
