// problem: 출제비 재분배
// id: 26145
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    int iter = n + m;
    int *s = (int *)malloc(sizeof(int) * (n + m));
    for (int i = 0; i < n; i++)
        cin >> s[i];
    fill(s + n, s + n + m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < iter; j++)
        {
            cin >> t;
            s[i] -= t;
            s[j] += t;
        }
    }

    for (int i = 0; i < iter; i++)
        cout << s[i] << ' ';

    return 0;
}