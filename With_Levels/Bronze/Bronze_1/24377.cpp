// problem: ИГРА
// id: 24377
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b[5], cnt = 0;
    bool ca[5] = {0}, cb[5] = {0};
    for (int i = 1; i <= 4; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
            ca[i] = 1, cnt++;
        if (b[i])
            cb[b[i]] = 1;
    }
    if (!cnt)
        cout << b[1] << ' ' << b[2];
    else if (cnt == 1)
    {
        for (int i = 1; i <= 4; i++)
            if (ca[i])
                cout << i << ' ';
        for (int i = 1; i <= 4; i++)
            if (!cb[i])
                cout << i << ' ';
    }
    else if (cnt == 2)
    {
        for (int i = 1; i <= 4; i++)
            if (!cb[i])
                cout << i << ' ';
    }

    return 0;
}