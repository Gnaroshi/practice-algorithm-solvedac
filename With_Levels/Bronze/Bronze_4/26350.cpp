// problem: Good Coin Denomination
// id: 26350
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
        int n;
        cin >> n;
        cout << "Denominations:";
        int prev;
        bool isOk = true;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            cout << ' ' << t;
            if (i == 0)
            {
                prev = t;
            }
            else
            {
                if (prev * 2 > t)
                    isOk = false;
                prev = t;
            }
        }
        cout << '\n';
        if (isOk)
            cout << "Good coin denominations!";
        else
            cout << "Bad coin denominations!";
        if (tc != 0)
            cout << "\n\n";
    }

    return 0;
}