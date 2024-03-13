// problem: 가위 바위 보?
// id: 4493
// time taken:
#include <bits/stdc++.h>
using namespace std;

int rsp(char a, char b)
{
    if (a == b)
        return 0;
    if (a == 'R' && b == 'S' || a == 'S' && b == 'P' || a == 'P' && b == 'R')
        return 1;
    else
        return -1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, p = 0;
        char a, b;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            p += rsp(a, b);
        }
        if (p == 0)
            cout << "TIE";
        else if (p > 0)
            cout << "Player 1";
        else
            cout << "Player 2";
        cout << '\n';
    }

    return 0;
}