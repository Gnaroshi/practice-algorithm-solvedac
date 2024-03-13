// problem: TGN
// id: 5063
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
        int r, e, c;
        cin >> r >> e >> c;
        int t = e - c - r;
        if (t > 0)
            cout << "advertise";
        else if (t == 0)
            cout << "does not matter";
        else
            cout << "do not advertise";
        cout << '\n';
    }

    return 0;
}