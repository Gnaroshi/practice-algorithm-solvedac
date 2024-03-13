// problem: Die Hard
// id: 30435
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d[3][6];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            cin >> d[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        int ca = 0, cb = 0, ma = 36, mb = 36;
        bool chk = true;
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                continue;
            if (chk)
            {
                for (int a = 0; a < 6; a++)
                {
                    for (int b = 0; b < 6; b++)
                    {
                        if (d[i][a] > d[j][b])
                            ca++;
                        else if (d[i][a] == d[j][b])
                            ma--;
                    }
                }
                chk = false;
            }
            else
            {
                for (int a = 0; a < 6; a++)
                {
                    for (int b = 0; b < 6; b++)
                    {
                        if (d[i][a] > d[j][b])
                            cb++;
                        else if (d[i][a] == d[j][b])
                            mb--;
                    }
                }
            }
        }
        if ((ca * 10 >= ma * 5 && ma) && (cb * 10 >= mb * 5 && mb))
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << "No dice";

    return 0;
}