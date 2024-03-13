// problem: Battle Simulation
// id: 13462
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        bool chk = true;
        if (i < iter - 2)
        {
            int t = 0;
            for (int j = i; j < i + 3; j++)
            {
                if (s[j] == 'R')
                    t += 1;
                else if (s[j] == 'B')
                    t += 10;
                else
                    t += 100;
            }
            if (t == 111)
            {
                cout << 'C';
                i += 2;
                chk = false;
            }
        }
        if (chk)
        {
            if (s[i] == 'R')
                cout << 'S';
            else if (s[i] == 'B')
                cout << 'K';
            else
                cout << 'H';
        }
    }

    return 0;
}