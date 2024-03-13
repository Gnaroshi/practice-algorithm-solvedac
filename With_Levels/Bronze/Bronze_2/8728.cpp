// problem: Grusze i jabłonie
// id: 8728
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool brd[1000001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx = -1, n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> brd[i];
    int a1, a2, b1, b2;
    a1 = a2 = b1 = b2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (brd[i] && a1 == -1)
            a1 = i;
        else if (!brd[i] && a2 == -1)
            a2 = i;
        if (a1 != -1 && a2 != -1)
            break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (brd[i] && b1 == -1)
            b1 = i;
        else if (!brd[i] && b2 == -1)
            b2 = i;
        if (b1 != -1 && b2 != -1)
            break;
    }
    cout << max(abs(a1 - b2), abs(a2 - b1));

    return 0;
}