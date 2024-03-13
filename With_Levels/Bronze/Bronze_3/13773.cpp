// problem: Olympic Games
// id: 13773
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    while (true)
    {
        cin >> y;
        if (y == 0)
            break;
        cout << y;
        y -= 1896;
        if (y == 20 || y == 44 || y == 48)
            cout << " Games cancelled";
        else if (y % 4 == 0 && y >= 0)
        {
            if (y >= 128)
                cout << " No city yet chosen";
            else
                cout << " Summer Olympics";
        }
        else
            cout << " No summer games";
        cout << '\n';
    }

    return 0;
}