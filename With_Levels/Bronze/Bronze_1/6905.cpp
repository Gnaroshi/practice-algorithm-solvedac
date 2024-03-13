// problem: Snakes and Ladders
// id: 6905
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cur = 1;
    while (true)
    {
        cin >> n;
        if (!n)
        {
            cout << "You Quit!";
            break;
        }
        cur += n;
        if (cur == 9)
            cur = 34;
        else if (cur == 40)
            cur = 64;
        else if (cur == 67)
            cur = 86;
        else if (cur == 99)
            cur = 77;
        else if (cur == 90)
            cur = 48;
        else if (cur == 54)
            cur = 19;
        if (cur > 100)
            cur -= n;
        cout << "You are now on square " << min(cur, 100) << '\n';
        if (cur == 100)
        {
            cout << "You Win!";
            break;
        }
    }

    return 0;
}