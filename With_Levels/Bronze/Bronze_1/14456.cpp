// problem: Hoof, Paper, Scissors (Bronze)
// id: 14456
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, mx, ta, tb;
vector<int> a(101), b(101);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < 3; i++)
    {
        ta = tb = 0;
        for (int j = 0; j < n; j++)
        {
            if ((a[j] + i) % 3 == (b[j] + i) % 3)
                continue;
            if ((a[j] + i) % 3 + 1 == 1 && (b[j] + i) % 3 + 1 == 2)
                ta++;
            else if ((a[j] + i) % 3 + 1 == 2 && (b[j] + i) % 3 + 1 == 1)
                tb++;
            else if ((a[j] + i) % 3 + 1 == 2 && (b[j] + i) % 3 + 1 == 3)
                ta++;
            else if ((a[j] + i) % 3 + 1 == 3 && (b[j] + i) % 3 + 1 == 2)
                tb++;
            else if ((a[j] + i) % 3 + 1 == 3 && (b[j] + i) % 3 + 1 == 1)
                ta++;
            else if ((a[j] + i) % 3 + 1 == 1 && (b[j] + i) % 3 + 1 == 3)
                tb++;
        }
        mx = max(mx, max(ta, tb));
    }
    cout << mx;

    return 0;
}