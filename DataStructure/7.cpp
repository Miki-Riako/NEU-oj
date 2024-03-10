#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
vector<pair<char, int> > a;
vector<pair<char, int> > bubbleSort(vector<pair<char, int> > a) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = n - 1; j > i; --j)
            if (a[j].second < a[j - 1].second)
                swap(a[j], a[j - 1]);
    return a;
}
vector<pair<char, int> > selectionSort(vector<pair<char, int> > a) {
    for (int i = 0; i < n - 1; ++i) {
        int mini = i;
        for (int j = i; j < n; ++j) {
            if (a[j].second < a[mini].second)
                mini = j;
        }
        swap(a[i], a[mini]);
    }
    return a;
}
void printSort(const vector<pair<char, int> > &a) {
    for (int i = 0; i < n; ++i) {
        if (i < n - 1)
            cout << a[i].first << a[i].second << " ";
        else
            cout << a[i].first << a[i].second << endl;
    }
}
bool checkStable(const vector<pair<char, int> > &a, const vector<pair<char, int> > &b) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (b[i].second == b[j].second) {
                int preNum = -1, ptrNum = -1;
                for (int k = 0; k < n; ++k) {
                    if (b[i] == a[k])
                        preNum = k;
                    if (b[j] == a[k])
                        ptrNum = k;
                }
                if (preNum > ptrNum && preNum != -1 && ptrNum != -1)
                    return false;
            }
        }
    }
    return true;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for (auto &i : a) {
        string temp;
        cin >> temp;
        i.first = temp[0];
        i.second = stoi(temp.substr(1));
    }
    auto bubbleOut = bubbleSort(a);
    auto selectionOut = selectionSort(a);
    printSort(bubbleOut);
    if (checkStable(a, bubbleOut))
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    printSort(selectionOut);
    if (checkStable(a, selectionOut))
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    return 0;
}
