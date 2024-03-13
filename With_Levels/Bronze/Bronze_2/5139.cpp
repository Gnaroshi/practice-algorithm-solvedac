// problem: Oil Exploration
// id: 5139
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Data Set " << i << ":\n";

        int h, w;
        cin >> h >> w;
        string s;
        char **brd = (char **)malloc(sizeof(char *) * h);
        for (int j = 0; j < h; j++)
            brd[j] = (char *)malloc(sizeof(char) * w);
        for (int j = 0; j < h; j++)
        {
            cin >> s;
            for (int k = 0; k < w; k++)
                brd[j][k] = s[k];
        }

        for (int j = 0; j < w; j++)
        {
            bool fnd = false;
            int t = 0;
            for (int k = 0; k < h; k++)
            {
                char cur = brd[k][j];
                if (cur == 'X')
                {
                    fnd = true;
                    break;
                }
                else if (cur == 'H')
                    t += 3;
                else
                    t++;
            }
            if (fnd)
                cout << t;
            else
                cout << 'N';
            if (j != w - 1)
                cout << ' ';
        }
        cout << '\n';

        if (i < tc)
            cout << '\n';
    }

    return 0;
}