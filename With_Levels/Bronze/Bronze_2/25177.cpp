// problem: 서강의 역사를 찾아서
// id: 25177
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int mnm = max(n, m);
    int *a = (int *)malloc(sizeof(int) * mnm);
    fill(a, a + mnm, 0);
    int *b = (int *)malloc(sizeof(int) * mnm);
    fill(b, b + mnm, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int mx = 0;
    for (int i = 0; i < mnm; i++)
    {
        if (b[i])
            mx = max(b[i] - a[i], mx);
    }
    cout << mx;

    return 0;
}