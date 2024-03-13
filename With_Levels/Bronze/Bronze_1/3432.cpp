// problem: Game
// id: 3432
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<string> v(5);
        for (auto &i : v)
            cin >> i;
        bool ca, cb;
        ca = cb = false;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (v[i][j] == v[i][j + 1] && v[i][j] == v[i][j + 2])
                {
                    if (v[i][j] == 'A')
                        ca = true;
                    else
                        cb = true;
                }
            }
            for (int j = 0; j < 3; j++)
            {
                if (v[j][i] == v[j + 1][i] && v[j][i] == v[j + 2][i])
                {
                    if (v[j][i] == 'A')
                        ca = true;
                    else
                        cb = true;
                }
            }
        }
        if (!ca || !cb)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (v[i][j] == v[i + 1][j + 1] && v[i][j] == v[i + 2][j + 2])
                    {
                        if (v[i][j] == 'A')
                            ca = true;
                        else
                            cb = true;
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 2; j < 5; j++)
                {
                    if (v[i][j] == v[i + 1][j - 1] && v[i][j] == v[i + 2][j - 2])
                    {
                        if (v[i][j] == 'A')
                            ca = true;
                        else
                            cb = true;
                    }
                }
            }
        }
        if (ca == cb)
            cout << "draw\n";
        else
            cout << (ca ? "A" : "B") << " wins\n";
    }

    return 0;
}