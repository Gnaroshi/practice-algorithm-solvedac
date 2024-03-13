// problem: Distinct Digits
// id: 30167
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool fn(int n)
{
    int dc[10] = {0};
    while (n > 0)
    {
        dc[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (dc[i] > 1)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    bool chk = false;
    cin >> l >> r;

    for (int i = l; i <= r; i++)
    {
        if (fn(i))
        {
            chk = true;
            cout << i;
            break;
        }
    }
    if (!chk)
        cout << -1;

    return 0;
}