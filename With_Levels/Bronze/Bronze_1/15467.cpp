// problem: The Combination of Poker Cards
// id: 15467
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
        int cnt[14] = {0}, t, pc = 0, tpc = 0, fpc = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> t;
            cnt[t]++;
        }
        for (int i = 1; i <= 13; i++)
        {
            if (cnt[i] == 2)
                pc++;
            else if (cnt[i] == 3)
                tpc++;
            else if (cnt[i] == 4)
                fpc++;
        }
        if (tpc == 1 && pc == 1)
            cout << "full house";
        else if (fpc == 1 && pc == 1)
            cout << "tiki pair";
        else if (fpc == 1)
            cout << "tiki";
        else if (tpc == 2)
            cout << "two triples";
        else if (tpc == 1)
            cout << "one triple";
        else if (pc == 3)
            cout << "three pairs";
        else if (pc == 2)
            cout << "two pairs";
        else if (pc == 1)
            cout << "one pair";
        else
            cout << "single";
        cout << '\n';
    }

    return 0;
}