// problem: 아스키 아트
// id: 17072
// time taken:
#include <bits/stdc++.h>
using namespace std;

char fn(int a, int b, int c)
{
    int t = 2126 * a + 7152 * b + 722 * c;
    if (t < 510000)
        return '#';
    if (t < 1020000)
        return 'o';
    if (t < 1530000)
        return '+';
    if (t < 2040000)
        return '-';
    return '.';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, c;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a >> b >> c;
            cout << fn(a, b, c);
        }
        cout << '\n';
    }

    return 0;
}