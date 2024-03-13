// problem: Letterle
// id: 24747
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    bool chk[26] = {0};
    cin >> s;
    for (auto i : s)
        chk[i - 'A'] = 1;
    vector<string> v;
    for (int i = 0; i < 7; i++)
    {
        cin >> t;
        v.emplace_back(t);
    }
    for (int i = 0; i < 7; i++)
    {
        if (s == v[i])
        {
            cout << "WINNER";
            break;
        }
        if (i != 6)
        {
            for (int j = 0; j < 5; j++)
            {
                if (s[j] == v[i][j])
                    cout << 'G';
                else if (chk[v[i][j] - 'A'])
                    cout << 'Y';
                else
                    cout << 'X';
            }
            cout << '\n';
        }
        else
            cout << "LOSER";
    }

    return 0;
}