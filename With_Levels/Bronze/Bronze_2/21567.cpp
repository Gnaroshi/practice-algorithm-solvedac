// problem: 숫자의 개수 2
// id: 21567
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    int cnt[10] = {0};
    string s = to_string(a * b * c);
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        cnt[s[i] - '0']++;
    for (int i = 0; i < 10; i++)
        cout << cnt[i] << '\n';

    return 0;
}