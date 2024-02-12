#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];
    for (int i = 0; i < n; ++i)
        cin >> y[i];
    vector<double> d(n);
    for (int i = 0; i < n; ++i)
        d[i] = abs(x[i] - y[i]);
    double manhattan_distance = 0;
    double euclidean_distance = 0;
    double minkowski_distance_3 = 0;
    double chebyshev_distance = 0;
    for (int i = 0; i < n; ++i) {
        manhattan_distance += d[i];
        euclidean_distance += d[i] * d[i];
        minkowski_distance_3 += pow(d[i], 3);
    }
    euclidean_distance = sqrt(euclidean_distance);
    minkowski_distance_3 = pow(minkowski_distance_3, 1.0 / 3.0);
    chebyshev_distance = *max_element(d.begin(), d.end());
    cout << fixed << setprecision(6) << manhattan_distance << endl;
    cout << fixed << setprecision(6) << euclidean_distance << endl;
    cout << fixed << setprecision(6) << minkowski_distance_3 << endl;
    cout << fixed << setprecision(6) << chebyshev_distance << endl;
    return 0;
}
