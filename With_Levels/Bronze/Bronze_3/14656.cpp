// problem: 조교는 새디스트야!!
// id: 14656
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t != i)
            cnt++;
    }
    cout << cnt;

    return 0;
}