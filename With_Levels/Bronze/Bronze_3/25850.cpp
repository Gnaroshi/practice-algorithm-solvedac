// problem: A Game Called Mind
// id: 25850
// time taken:
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, char> pic;

bool comp(pic a, pic b)
{
    return a.first < b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pic> v;
    char st = 'A';
    for (int i = 0; i < n; i++)
    {
        int p, c;
        cin >> p;
        for (int j = 0; j < p; j++)
        {
            cin >> c;
            v.push_back({c, st});
        }
        st++;
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
    {
        cout << i.second;
    }

    return 0;
}