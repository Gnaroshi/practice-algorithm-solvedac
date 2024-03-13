// problem: 좋은놈 나쁜놈
// id: 4447
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int t = 0;
        for (auto i : s)
        {
            if (isalpha(i))
            {
                if (i == 'G' || i == 'g')
                    t++;
                else if (i == 'B' || i == 'b')
                    t--;
            }
        }
        cout << s;
        if (t > 0)
            cout << " is GOOD\n";
        else if (t < 0)
            cout << " is A BADDY\n";
        else
            cout << " is NEUTRAL\n";
    }

    return 0;
}