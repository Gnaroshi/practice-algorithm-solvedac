// problem: Even Sum More Than Odd Sum
// id: 5235
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
        int n, t;
        int e = 0, o = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t % 2 == 0)
                e += t;
            else
                o += t;
        }
        if (e > o)
            cout << "EVEN\n";
        else if (e < o)
            cout << "ODD\n";
        else
            cout << "TIE\n";
    }

    return 0;
}