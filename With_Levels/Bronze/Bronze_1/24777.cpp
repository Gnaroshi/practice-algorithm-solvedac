// problem: Set!
// id: 24777
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<tuple<int, int, int>> ans;
    vector<string> v;
    string s;
    bool chk;
    for (int i = 0; i < 12; i++)
    {
        cin >> s;
        v.emplace_back(s);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 11; j++)
        {
            for (int k = j + 1; k < 12; k++)
            {
                chk = true;
                for (int f = 0; f < 4; f++)
                {
                    if (v[i][f] == v[j][f] && v[i][f] == v[k][f])
                        continue;
                    if (v[i][f] != v[j][f] && v[i][f] != v[k][f] && v[j][f] != v[k][f])
                        continue;
                    chk = false;
                    break;
                }
                if (chk)
                    ans.push_back({i + 1, j + 1, k + 1});
            }
        }
    }
    if (ans.empty())
        cout << "no sets";
    else
    {
        int a, b, c;
        for (auto i : ans)
        {
            tie(a, b, c) = i;
            cout << a << ' ' << b << ' ' << c << '\n';
        }
    }

    return 0;
}