// problem: Mad Scientist
// id: 4580
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n;
        cin >> n;
        if (!n)
            break;
        string s = "";
        int a, b;
        cin >> a;
        for (int i = 0; i < a; i++)
            s += "1 ";
        for (int i = 2; i <= n; i++)
        {
            cin >> b;
            for (int j = 0; j < b - a; j++)
            {
                s += to_string(i);
                s += ' ';
            }
            a = b;
        }
        cout << s.substr(0, s.length() - 1) << '\n';
    }

    return 0;
}