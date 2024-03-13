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
        int c[5] = {0};
        int x;
        cin >> x;
        while (true)
        {
            if (x >= 25)
            {
                x -= 25;
                c[0]++;
            }
            else
                break;
        }
        while (true)
        {
            if (x >= 10)
            {
                x -= 10;
                c[1]++;
            }
            else
                break;
        }
        while (true)
        {
            if (x >= 5)
            {
                x -= 5;
                c[2]++;
            }
            else
                break;
        }
        c[3] = x;
        for (int i = 0; i < 4; i++)
        {
            cout << c[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}