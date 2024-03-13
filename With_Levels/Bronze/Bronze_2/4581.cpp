// problem: Voting
// id: 4581
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
        int a = 0, b = s.length() / 2 + (s.length() % 2), c = 0;
        for (auto i : s)
        {
            if (i == 'Y')
                a++;
            else if (i == 'N')
                a--;
            else if (i == 'A')
                c++;
        }
        if (c >= b)
            cout << "need quorum\n";
        else if (a > 0)
            cout << "yes\n";
        else if (a < 0)
            cout << "no\n";
        else
            cout << "tie\n";
    }

    return 0;
}