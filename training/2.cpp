#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string dna;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> dna;
    char target = dna[0];
    int max = 0;
    int len = 0;
    for (char ch :dna) {
        if (ch == target)
            ++len;
        else {
            target = ch;
            if (len > max)
                max = len;
            len = 1;
        }
    }
    max = max > len ? max : len;
    cout << max << endl;
    return 0;
}
