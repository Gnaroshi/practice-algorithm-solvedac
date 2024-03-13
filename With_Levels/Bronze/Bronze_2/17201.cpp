// problem: 자석 체인
// id: 17201
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool chk = true;
    int n;
    string s, bef, c;
    cin >> n >> s;
    bef = s.substr(0, 2);
    for (int i = 1; i < n; i++)
    {
        c = s.substr(i * 2, 2);
        if (bef != c)
        {
            chk = false;
            break;
        }
        bef = c;
    }
    cout << (chk ? "Yes" : "No");
    return 0;
}