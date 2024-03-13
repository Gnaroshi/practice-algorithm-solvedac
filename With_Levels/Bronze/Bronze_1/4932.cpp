// problem: Still Johnny Can’t Add
// id: 4932
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mt[11][11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << tcc << ". ";
        bool chk = true;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mt[i][j];
        for (int i = 1; i < n; i++)
        {
            int cur = mt[0][i] - mt[0][i - 1];
            for (int j = 0; j < n; j++)
            {
                if (cur != mt[j][i] - mt[j][i - 1])
                {
                    chk = false;
                    break;
                }
            }
            if (!chk)
                break;
        }
        cout << (chk ? "YES\n" : "NO\n");
    }

    return 0;
}