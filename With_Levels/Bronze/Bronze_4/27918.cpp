// problem: 탁구 경기
// id: 27918
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n;
    x = y = 0;
    bool isE = false;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (!isE)
        {
            if (c == 'D')
                x++;
            else
                y++;
            if (abs(x - y) >= 2)
                isE = true;
        }
    }
    cout << x << ':' << y;

    return 0;
}