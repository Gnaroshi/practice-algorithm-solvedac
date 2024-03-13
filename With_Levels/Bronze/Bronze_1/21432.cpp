// problem: Нефть
// id: 21432
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool comp1(pair<double, double> a, pair<double, double> b)
{
    if (a.first == b.first)
        return (a.second * -1 < b.second * -1);
    return a.first < b.first;
}
bool comp2(pair<double, double> a, pair<double, double> b)
{
    if (a.second == b.second)
        return (a.first * -1 < b.first * -1);
    return a.second < b.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double a, b, ta, tb, mn, mnl;
    cin >> n >> a >> b;
    cout << fixed;
    cout.precision(2);
    vector<pair<double, double>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    if (n == 1)
        cout << max(a / v[0].first, b / v[0].second);
    else
    {
        sort(v.begin(), v.end(), comp1);
        mn = 10000;
        mnl = 1;
        for (int i = 1; i < n; i++)
        {
            if (mn > v[i].second)
            {
                mn = v[i].second;
                mnl = i;
            }
        }
        ta = a / v[0].first + b / v[mnl].second;
        sort(v.begin(), v.end(), comp2);
        mn = 10000;
        mnl = 1;
        for (int i = 1; i < n; i++)
        {
            if (mn > v[i].first)
            {
                mn = v[i].first;
                mnl = i;
            }
        }
        tb = a / v[mnl].first + b / v[0].second;
        cout << max(ta, tb);
    }

    return 0;
}