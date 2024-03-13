// problem: 대출 요청
// id: 16497
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n;
    int *cnt = (int *)malloc(sizeof(int) * 32);
    fill(cnt, cnt + 32, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b - 1; j++)
            cnt[j]++;
    }
    cin >> k;
    for (int i = 1; i <= 31; i++)
    {
        if (cnt[i] > k)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}