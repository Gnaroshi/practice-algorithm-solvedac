// problem: 옷걸이
// id: 27951
// time taken:
#include <bits/stdc++.h>
using namespace std;

char hg[1000001];
int cnt[4];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, u, d, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cnt[a]++;
        hg[i] = a;
    }
    cin >> u >> d;
    if (cnt[1] > u || cnt[2] > d)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    a = u - cnt[1];
    for (int i = 0; i < n; i++)
    {
        if (hg[i] == 1)
            cout << "U";
        else if (hg[i] == 2)
            cout << "D";
        else if (a)
        {
            cout << "U";
            a--;
        }
        else
            cout << "D";
    }

    return 0;
}