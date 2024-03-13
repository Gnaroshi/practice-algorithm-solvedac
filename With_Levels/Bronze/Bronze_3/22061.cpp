// problem: Покупка велосипеда
// id: 22061
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b * 2 < c)
            cout << "NO";
        else
        {
            if (c % 2 == 0)
            {
                if (b * 2 + a >= c)
                    cout << "YES";
                else
                    cout << "NO";
            }
            else
            {
                if (a == 0)
                    cout << "NO";
                else
                {
                    if (b * 2 >= c - a)
                        cout << "YES";
                    else
                        cout << "NO";
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
