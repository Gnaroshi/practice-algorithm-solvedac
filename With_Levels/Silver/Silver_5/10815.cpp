// problem: 숫자 카드
// id: 10815
// time taken:
#include <bits/stdc++.h>
using namespace std;

void qs(int *a, int s, int e)
{
    if (s >= e)
        return;
    int p = s, i = s + 1, j = e;
    int tmp = s + rand() % (e - s + 1);
    swap(a[s], a[tmp]);
    while (i <= j)
    {
        while (a[i] <= a[p])
            i++;
        while (a[j] >= a[p] && j > s)
            j--;
        if (i > j)
            swap(a[j], a[p]);
        else
            swap(a[j], a[i]);
        qs(a, s, j - 1);
        qs(a, j + 1, e);
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n;
    int *cds = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> cds[i];
    cin >> m;
    // qs(cds, 0, n - 1);
    sort(cds, cds + n);

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        int l = 0, r = n - 1, md = (l + r) / 2;
        bool chk = false;
        while (l <= r)
        {
            if (cds[md] == t)
            {
                chk = true;
                break;
            }
            if (cds[md] > t)
                r = md - 1;
            else
                l = md + 1;
            md = (r + l) / 2;
        }
        if (chk)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }

    return 0;
}