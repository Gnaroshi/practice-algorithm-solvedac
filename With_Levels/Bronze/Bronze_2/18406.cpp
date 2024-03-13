// problem: 럭키 스트레이트
// id: 18406
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    string s;
    cin >> s;
    int iter = s.length() / 2, si = s.length();
    for (int i = 0; i < iter; i++)
        t += s[i] - '0';
    for (int i = iter; i < si; i++)
        t -= s[i] - '0';
    if (t == 0)
        cout << "LUCKY";
    else
        cout << "READY";

    return 0;
}