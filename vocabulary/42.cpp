#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int up, down, west, east, south, north;
string control;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> up >> south >> east >> west >> north >> down;
    cin >> control;
    for (int i = 0; i < control.size(); ++i) {
        int temp;
        switch (control[i]) {
        case 'N':
            temp = up;
            up = south;
            south = down;
            down = north;
            north = temp;
            break;
        case 'S':
            temp = up;
            up = north;
            north = down;
            down = south;
            south = temp;
            break;
        case 'W':
            temp = up;
            up = east;
            east = down;
            down = west;
            west = temp;
            break;
        case 'E':
            temp = up;
            up = west;
            west = down;
            down = east;
            east = temp;
            break;
        default:
            break;
        }
    }
    cout << up << endl;
    return 0;
}
