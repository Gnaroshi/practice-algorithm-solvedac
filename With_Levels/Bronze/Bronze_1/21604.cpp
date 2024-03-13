// problem: 겹강 찾기
// id: 21604
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cl[1001][1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> cl[i][j];
    cout << m << '\n';
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << cl[(i + j) % m][j] << (j != n - 1 ? ' ' : '\n');

    return 0;
}