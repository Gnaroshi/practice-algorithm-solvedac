// problem: Beautiful Music
// id: 15181
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        int iter = s.length();
        char c = s[0];
        bool chk = true;
        for (int i = 1; i < iter; i++)
        {
            int dif = s[i] - c;
            if (dif < 0)
                dif += 7;
            if (dif != 2 && dif != 4 && dif != 6)
            {
                chk = false;
                break;
            }
            c = s[i];
        }
        if (chk)
            cout << "That music is beautiful.\n";
        else
            cout << "Ouch! That hurts my ears.\n";
    }

    return 0;
}