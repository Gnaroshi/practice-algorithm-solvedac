// problem: Die Game
// id: 22840
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        // top, north, south, west, east, bottom
        int die[6] = {1, 2, 5, 3, 4, 6}, a, b, c, d;
        string s;
        while (n--)
        {
            cin >> s;
            if (s[0] == 's')
            {
                // t -> n, n -> b, b -> s, s -> t
                //
                a = die[0], b = die[1], c = die[5], d = die[2];
                die[0] = b;
                die[1] = c;
                die[5] = d;
                die[2] = a;
            }
            else if (s[0] == 'n')
            {
                // top, north, south, west, east, bottom
                // t -> s, s -> b, b -> n, n -> t
                a = die[0], b = die[2], c = die[5], d = die[1];
                die[0] = b;
                die[2] = c;
                die[5] = d;
                die[1] = a;
            }
            else if (s[0] == 'w')
            {
                // top, north, south, west, east, bottom
                // t -> e, e -> b, b -> w, w -> t
                // 0 4, 4 5, 5 3, 3 0
                a = die[0], b = die[4], c = die[5], d = die[3];
                die[0] = b;
                die[4] = c;
                die[5] = d;
                die[3] = a;
            }
            else if (s[0] == 'e')
            {
                // top, north, south, west, east, bottom
                // t -> w, w -> b, b -> e, e -> t
                // 0 3, 3 5, 5 4, 4 0
                a = die[0], b = die[3], c = die[5], d = die[4];
                die[0] = b;
                die[3] = c;
                die[5] = d;
                die[4] = a;
            }
        }
        cout << die[0] << '\n';
    }

    return 0;
}