// problem: Elevators
// id: 20571
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> s >> n;
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    if (s[0] == 'r')
    {
        for (int i = 5; i <= 20; i += 5)
        {
            if (n <= i)
            {
                cout << i / 5;
                break;
            }
        }
    }
    else if (s[0] == 'c')
    {
        for (int i = 7; i <= 21; i += 7)
        {
            if (n <= i)
            {
                cout << i / 7;
                break;
            }
        }
    }
    else
    {
        for (int i = 4; i <= 20; i += 4)
        {
            if (n <= i)
            {
                cout << i / 4;
                break;
            }
        }
    }

    return 0;
}