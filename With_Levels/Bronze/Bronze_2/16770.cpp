// problem: The Bucket List
// id: 16770
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[1001];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, t, b;
    cin >> n;
    while (n--)
    {
        cin >> s >> t >> b;
        for (int i = s; i <= t; i++)
            cnt[i] += b;
    }
    cout << *max_element(cnt, cnt + 1000);

    return 0;
}