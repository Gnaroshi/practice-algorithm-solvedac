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
        int ans = 0;
        string temp;
        cin >> temp;

        for (int i = 0; i < 16; i++)
        {
            if (i % 2 == 0)
            {
                int dgt = temp[i] - '0';
                dgt *= 2;
                if (dgt >= 10)
                {
                    dgt = dgt % 10 + 1;
                }
                temp[i] = dgt + '0';
            }
            ans += (temp[i] - '0');
        }
        if (ans % 10 == 0)
            cout << "T\n";
        else
            cout << "F\n";
    }

    return 0;
}