// problem: ZOAC 2
// id: 18238
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    string s;
    cin >> s;
    char bef = 'A';
    for (auto i : s)
    {
        ans += min(abs(i - bef), 26 - abs(i - bef));
        bef = i;
    }
    cout << ans;

    return 0;
}