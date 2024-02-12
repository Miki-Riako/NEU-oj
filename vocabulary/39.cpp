#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
double a, b, c;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> a >> b >> c;
    double radians = c * M_PI / 180;
    double s = a * b * sin(radians) / 2;
    double l = a + b + sqrt(a * a + b * b - 2 * a * b * cos(radians));
    double h = 2 * s / a;
    cout << fixed << setprecision(8) << s << endl;
    cout << fixed << setprecision(8) << l << endl;
    cout << fixed << setprecision(8) << h << endl;
    return 0;
}
