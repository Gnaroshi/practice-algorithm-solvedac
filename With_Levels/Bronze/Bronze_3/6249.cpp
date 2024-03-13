// problem: TV Reports
// id: 6249
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, h, t;
    cin >> n >> p >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < p)
        {
            cout << "NTV: Dollar dropped by " << p - t << " Oshloobs\n";
        }
        else if (t > h)
        {
            cout << "BBTV: Dollar reached " << t << " Oshloobs, A record!\n";
            h = t;
        }
        p = t;
    }
    return 0;
}