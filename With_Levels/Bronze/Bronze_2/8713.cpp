// problem: Znak działania
// id: 8713
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<pair<int, char>> v;
    v.push_back({a - b, '-'});
    v.push_back({a + b, '+'});
    v.push_back({a * b, '*'});
    sort(v.begin(), v.end());
    if (v[2].first == v[1].first)
        cout << "NIE";
    else
    {
        if (a < 0)
            cout << '(' << a << ')';
        else
            cout << a;
        cout << v[2].second;
        if (b < 0)
            cout << '(' << b << ')';
        else
            cout << b;
        cout << '=';
        if (v[2].first < 0)
            cout << '(' << v[2].first << ')';
        else
            cout << v[2].first;
    }

    return 0;
}