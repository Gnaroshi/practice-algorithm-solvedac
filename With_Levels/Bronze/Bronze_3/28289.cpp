// problem: 과 조사하기
// id: 28289
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    int cnt[4] = {0};
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int g, c, n;
        cin >> g >> c >> n;
        if (g == 1)
            cnt[3]++;
        else
        {
            if (c == 1 || c == 2)
                cnt[0]++;
            else if (c == 3)
                cnt[1]++;
            else
                cnt[2]++;
        }
    }
    for (int i = 0; i < 4; i++)
        cout << cnt[i] << '\n';

    return 0;
}