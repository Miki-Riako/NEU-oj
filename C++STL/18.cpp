#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
    char type;
    string date;
    string name;
};

int main(void)
{
    int n;
    cin >> n;
    vector<Item> items(n);
    for (auto &i : items)
        cin >> i.value >> i.weight >> i.type >> i.date >> i.name;
    sort(items.begin(), items.end(),
    [](Item &a, Item &b)
    {
        if (a.value != b.value)
            return a.value < b.value;
        else if (a.weight != b.weight)
            return a.weight < b.weight;
        else if (a.type != b.type)
            return a.type < b.type;
        else if (a.date != b.date)
            return a.date < b.date;
        else
            return a.name < b.name;
    });
    for (auto &i : items)
        cout << i.value << " " << i.weight << " " << i.type << " " << i.date << " " << i.name << endl;
    return 0;
}
