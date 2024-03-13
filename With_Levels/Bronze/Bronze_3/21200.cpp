// problem: Forced Choice
// id: 21200
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, s, m, t;
    cin >> n >> p >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> m;
        bool chk = true;
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (t == p)
                chk = false;
        }
        if (chk)
            cout << "REMOVE\n";
        else
            cout << "KEEP\n";
    }

    return 0;
}