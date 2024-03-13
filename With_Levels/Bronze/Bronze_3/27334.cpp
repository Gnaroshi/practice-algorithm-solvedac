// problem: マラソン大会 (Marathon Race)
// id: 27334
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n);
    int *r = (int *)malloc(sizeof(int) * n);
    int *vst = (int *)malloc(sizeof(int) * n);
    fill(vst, vst + n, 0);
    int mx = 1001;
    int cur = 1;
    int dup = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        mx = 1001, dup = 0;
        for (int j = 0; j < n; j++)
        {
            if (!vst[j] && mx > a[j])
            {
                mx = a[j];
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == mx)
            {
                vst[j] = 1;
                r[j] = cur;
                dup++;
            }
        }
        cur += dup;
    }
    for (int i = 0; i < n; i++)
        cout << r[i] << '\n';

    return 0;
}