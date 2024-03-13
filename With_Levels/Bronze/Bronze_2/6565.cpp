// problem: Hard to Believe, but True!
// id: 6565
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (getline(cin, s))
    {
        int iter = s.length(), loc = 0, pos = 0;
        string n[3];
        for (int i = 0; i < iter; i++)
        {
            if (loc == 2)
            {
                n[loc] = s.substr(pos, iter - i);
                break;
            }
            if (!isdigit(s[i]))
            {
                n[loc] = s.substr(pos, i - pos);
                loc++;
                pos = i + 1;
            }
        }
        for (int i = 0; i < 3; i++)
            reverse(n[i].begin(), n[i].end());
        if (stoi(n[0]) + stoi(n[1]) == stoi(n[2]))
            cout << "True\n";
        else
            cout << "False\n";
    }

    return 0;
}