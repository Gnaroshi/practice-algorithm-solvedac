#include <bits/stdc++.h>
using namespace std;

#define MX 30

int n;
int lc[MX];
int rc[MX];
vector<char> ans[3];
int toidx = 'A' - 1;

void pretra(int cur)
{
    ans[0].push_back(cur + toidx);
    if (lc[cur] != 0)
        pretra(lc[cur]);
    if (rc[cur] != 0)
        pretra(rc[cur]);
}

void intra(int cur)
{
    if (lc[cur] != 0)
        intra(lc[cur]);
    ans[1].push_back(cur + toidx);
    if (rc[cur] != 0)
        intra(rc[cur]);
}

void posttra(int cur)
{
    if (lc[cur] != 0)
        posttra(lc[cur]);
    if (rc[cur] != 0)
        posttra(rc[cur]);
    ans[2].push_back(cur + toidx);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char c, l, r;
        cin >> c >> l >> r;
        if (l != '.')
            lc[c - toidx] = l - toidx;
        if (r != '.')
            rc[c - toidx] = r - toidx;
    }
    pretra(1);
    intra(1);
    posttra(1);

    for (int i = 0; i < 3; i++)
    {
        for (auto cur : ans[i])
            cout << cur;
        cout << '\n';
    }

    return 0;
}