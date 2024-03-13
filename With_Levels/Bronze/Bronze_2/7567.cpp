// problem: 그릇
// id: 7567
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int iter = s.length(), ans = 10;
    char bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == bef)
            ans += 5;
        else
            ans += 10;
        bef = s[i];
    }
    cout << ans;
    

    return 0;
}