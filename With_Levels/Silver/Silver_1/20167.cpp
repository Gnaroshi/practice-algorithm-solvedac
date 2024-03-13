// problem: 꿈틀꿈틀 호석 애벌레 - 기능성
// id: 20167
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int *f, *mx;
void solv(int loc, int p, int s)
{
    if (loc == n)
    {
        ans = max(ans, s);
        return;
    }
    else
    {
        mx[loc] = 1;
        p += f[loc];
        if (p >= k)
            solv(loc + 1, 0, s - k + p);
        else
            solv(loc + 1, p, s);
        mx[loc] = 0;
        solv(loc + 1, 0, s);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    f = (int *)malloc(sizeof(int) * n);
    mx = (int *)malloc(sizeof(int) * n);
    fill(mx, mx + n, 0);
    for (int i = 0; i < n; i++)
        cin >> f[i];
    solv(0, 0, 0);
    cout << ans << '\n';

    return 0;
}