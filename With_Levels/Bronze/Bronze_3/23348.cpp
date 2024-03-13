// problem: 스트릿 코딩 파이터
// id: 23348
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d[3];
    int n, cnt = 0;
    int mx = -1;
    for (int i = 0; i < 3; i++)
        cin >> d[i];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t[3];
        cnt = 0;
        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j < 3; j++)
                cin >> t[j];
            for (int j = 0; j < 3; j++)
                cnt += t[j] * d[j];
        }
        mx = max(cnt, mx);
    }
    cout << mx;

    return 0;
}
