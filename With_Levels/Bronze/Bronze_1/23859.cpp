// problem: Snowman
// id: 23859
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t = "zz", mx = "zz";
    int k, l = 1, iter;
    char a, b;
    cin >> s >> k;
    iter = s.length();
    // 이전풀이: 합으로만 생각하면 문자열의 최소를 찾을 수가 없음
    // bb == ac

    for (int i = 1; i < iter; i++)
    {
        t[0] = s[i], t[1] = s[i - 1];
        if (mx > t)
            mx = t;
        t[1] = s[i], t[0] = s[i - 1];
        if (mx > t)
            mx = t;
    }
    for (int i = 0; i < k; i++)
        cout << mx[i % 2];

    return 0;
}