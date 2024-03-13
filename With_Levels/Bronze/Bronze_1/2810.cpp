// problem: 컵홀더
// id: 2810
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 1;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            i++;
        cnt++;
    }
    cout << min(n, cnt);

    return 0;
}