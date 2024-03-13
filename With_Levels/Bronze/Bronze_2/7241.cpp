// problem: Skaičiai
// id: 7241
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t[3], x;
    for (int i = 0; i < 3; i++)
        cin >> t[i];
    vector<int> v;
    set<int> s;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < 3; k++)
            {
                if (k == j || k == i)
                    continue;
                s.insert(t[i] * 100 + t[j] * 10 + t[k]);
            }
        }
    }
    cin >> x;
    for (auto i : s)
        v.push_back(i);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}