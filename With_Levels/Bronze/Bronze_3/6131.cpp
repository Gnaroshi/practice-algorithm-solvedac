// problem: 완전 제곱수
// id: 6131
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= 500; i++)
    {
        int t = i * i;
        for (int j = i + 1; j <= 500; j++)
        {
            if (j * j - t == n)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}