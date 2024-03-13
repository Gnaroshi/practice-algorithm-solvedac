// problem: N M 찍기
// id: 18883
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j != m - 1)
                cout << cnt++ << ' ';
            else
                cout << cnt++;
        }
        cout << '\n';
    }

    return 0;
}