// problem: What is n, Daddy?
// id: 6794
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i <= 5; i++)
        for (int j = i; j <= 5; j++)
            if (i + j == n)
                ans++;
    cout << ans;
    return 0;
}