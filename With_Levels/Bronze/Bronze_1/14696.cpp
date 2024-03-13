// problem: 딱지놀이
// id: 14696
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
        int a, b, t;
        cin >> a;
        int ca[5] = {0}, cb[5] = {0};
        for (int i = 0; i < a; i++)
        {
            cin >> t;
            ca[t]++;
        }
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            cin >> t;
            cb[t]++;
        }
        bool chk = true;
        for (int i = 4; i >= 1; i--)
        {
            if (ca[i] > cb[i])
            {
                cout << "A\n";
                chk = false;
                break;
            }
            else if (ca[i] < cb[i])
            {
                cout << "B\n";
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "D\n";
    }

    return 0;
}