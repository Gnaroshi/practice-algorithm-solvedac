// problem: Punchy
// id: 6796
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 0, y = 0, ins, n;
    char cx, cy;
    while (true)
    {
        cin >> ins;
        if (ins == 1)
        {
            cin >> cx >> n;
            if (cx == 'A')
                x = n;
            else
                y = n;
        }
        else if (ins == 2)
        {
            cin >> cx;
            if (cx == 'A')
                cout << x << '\n';
            else
                cout << y << '\n';
        }
        else if (ins == 3)
        {
            cin >> cx >> cy;
            if (cx == 'A' && cy == 'B')
                x += y;
            else if (cx == 'B' && cy == 'A')
                y += x;
            else if (cx == 'A' && cy == 'A')
                x += x;
            else
                y += y;
        }
        else if (ins == 4)
        {
            cin >> cx >> cy;
            if (cx == 'A' && cy == 'B')
                x *= y;
            else if (cx == 'B' && cy == 'A')
                y *= x;
            else if (cx == 'A' && cy == 'A')
                x *= x;
            else
                y *= y;
        }
        else if (ins == 5)
        {
            cin >> cx >> cy;
            if (cx == 'A' && cy == 'B')
                x -= y;
            else if (cx == 'B' && cy == 'A')
                y -= x;
            else if (cx == 'A' && cy == 'A')
                x -= x;
            else
                y -= y;
        }
        else if (ins == 6)
        {
            cin >> cx >> cy;
            if (cx == 'A' && cy == 'B')
                x /= y;
            else if (cx == 'B' && cy == 'A')
                y /= x;
            else if (cx == 'A' && cy == 'A')
                x /= x;
            else
                y /= y;
        }
        else
            break;
    }

    return 0;
}