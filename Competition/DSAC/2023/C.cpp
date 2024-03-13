// problem: C번 - 팰린드롬 이름
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n - k + 1; i++)
        cout << 'a';
    for (int i = 0; i < k - 1; i++)
        cout << char(98 + i);

    return 0;
}