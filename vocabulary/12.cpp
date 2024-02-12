#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v1;
    vector<int> v2;
    while (true) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp1 == 0 && temp2 == 0)
            break;
        else if(temp1 < temp2) {
            v1.push_back(temp1);
            v2.push_back(temp2);
        }
        else {
            v1.push_back(temp2);
            v2.push_back(temp1);
        }
    }
    for (int i = 0; i < v1.size(); ++i)
        cout << v1[i] << " " << v2[i] << endl;
    return 0;
}
