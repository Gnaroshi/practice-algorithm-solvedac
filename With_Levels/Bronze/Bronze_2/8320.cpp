// problem: 직사각형을 만드는 방법
// id: 8320
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i * j <= n)
                cnt++;
            else
                break;
        }
    }
    cout << cnt;

    return 0;
}