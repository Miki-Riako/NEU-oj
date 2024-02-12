#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
double x1_coord, y1_coord, x2_coord, y2_coord;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> x1_coord >> y1_coord >> x2_coord >> y2_coord;
    double distance = sqrt(pow(x2_coord - x1_coord, 2) + pow(y2_coord - y1_coord, 2));
    cout << fixed << setprecision(8) << distance << endl;
    return 0;
}
