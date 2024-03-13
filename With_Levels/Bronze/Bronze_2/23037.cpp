// problem: 5의 수난
// id: 23037
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), ans = 0;
    for (int i = 0; i < iter; i++)
    {
        ans += pow(s[i] - '0', 5);
    }
    cout << ans;

    return 0;
}