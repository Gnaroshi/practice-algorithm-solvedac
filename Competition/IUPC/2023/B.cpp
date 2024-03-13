// problem: B번 - 스파이
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int pg[2][3];

// 일수, 현재 기여도
void solv(int p, int c)
{
    if (p == n)
    {
        if (c >= m)
            ans++;
        return;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> pg[i][j];

    return 0;
}