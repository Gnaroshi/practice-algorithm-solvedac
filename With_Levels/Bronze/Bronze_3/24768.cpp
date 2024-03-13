// problem: Left Beehind
// id: 24768
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int x, y;
        cin >> x >> y;
        if (!x && !y)
            break;
        if (x + y == 13)
            cout << "Never speak again.";
        else if (x > y)
            cout << "To the convention.";
        else if (x < y)
            cout << "Left beehind.";
        else
            cout << "Undecided.";
        cout << '\n';
    }

    return 0;
}