// problem: 모르고리즘 회장님 추천 받습니다
// id: 20124
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, mx = -1;
    string s, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> a;
        if (a > mx)
        {
            ans = s;
            mx = a;
        }
        else if (a == mx && ans > s)
            ans = s;
    }
    cout << ans;

    return 0;
}