// problem: 시프트 연산
// id: 27740
// time taken:
#include <bits/stdc++.h>
using namespace std;

vector<int> pos;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mn = 0x3f3f3f3f, lc = 0, rc = 0, iter, chk = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t)
            pos.push_back(i);
    }
    if (pos.back() < mn)
    {
        lc = pos.back();
        mn = lc;
        chk = 1;
    }
    if (n + 1 - pos.front() < mn)
    {
        rc = n + 1 - pos.front();
        mn = rc;
        lc = 0;
        chk = 2;
    }
    iter = pos.size() - 1;

    for (int i = 0; i < iter; i++)
    {
        t = 2 * pos[i] - pos[i + 1] + n + 1;
        if (t < mn)
        {
            mn = t;
            lc = pos[i];
            rc = pos[i] + n + 1 - pos[i + 1];
            chk = 3;
        }
        t = 2 * (n + 1 - pos[i + 1]) + pos[i];
        if (t < mn)
        {
            mn = t;
            lc = pos[i] + n + 1 - pos[i + 1];
            rc = n + 1 - pos[i + 1];
            chk = 4;
        }
    }
    if (chk == 1)
    {
        cout << lc << '\n';
        for (int i = 0; i < lc; i++)
            cout << 'L';
    }
    else if (chk == 2)
    {
        cout << rc << '\n';
        for (int i = 0; i < rc; i++)
            cout << 'R';
    }
    else if (chk == 3)
    {
        cout << lc + rc << '\n';
        for (int i = 0; i < lc; i++)
            cout << 'L';
        for (int i = 0; i < rc; i++)
            cout << 'R';
    }
    else
    {
        cout << lc + rc << '\n';
        for (int i = 0; i < rc; i++)
            cout << 'R';
        for (int i = 0; i < lc; i++)
            cout << 'L';
    }

    return 0;
}