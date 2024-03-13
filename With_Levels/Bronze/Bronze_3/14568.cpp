// problem: 2017 연세대학교 프로그래밍 경시대회
// id: 14568
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    int a = 0, b = 0, c = 2;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
                break;
            for (int k = j + 2; k <= n; k++)
            {
                if (i + j + k > n)
                    break;
                if (i + j + k == n)
                    cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}