// problem: Vikingahackare
// id: 26906
// time taken:
#include <bits/stdc++.h>
using namespace std;

int bi[4] = {8, 4, 2, 1};

int btoi(string s)
{
    int ret = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == '1')
            ret += bi[i];
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<char, int>> v;

    int n;
    char t;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> s;
        v.push_back({t, btoi(s)});
    }

    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i += 4)
    {
        bool chk = false;
        string ts = s.substr(i, i + 4);
        int tsi = btoi(ts);
        for (auto j : v)
        {
            if (j.second == tsi)
            {
                cout << j.first;
                chk = true;
                break;
            }
        }
        if (!chk)
            cout << '?';
    }

    return 0;
}