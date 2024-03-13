// problem: Three Points for a Win
// id: 21022
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sa, t;
    cin >> n;
    sa = 0;
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
            sa += 3;
        else if (a[i] == b[i])
            sa++;
    }
    cout << sa;

    return 0;
}