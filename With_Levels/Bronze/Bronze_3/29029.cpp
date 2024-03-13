// problem: Фигурки
// id: 29029
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int cnt[4] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
            cnt[0]++;
        else if (s[i] == 'S')
            cnt[1]++;
        else if (s[i] == 'W')
            cnt[2]++;
        else
            cnt[3]++;
    }
    int mx = -1;
    for (int i = 0; i < 4; i++)
        mx = max(mx, cnt[i]);
    cout << n - mx;

    return 0;
}