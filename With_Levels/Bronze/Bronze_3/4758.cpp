// problem: Filling Out the Team
// id: 4758
// time taken:
#include <bits/stdc++.h>
using namespace std;

string s[3] = {"Wide Receiver", "Lineman", "Quarterback"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        int cnt = 0;
        int chk[3] = {0};
        if (a + b + c == 0)
            break;
        if (a <= 6.0 && (b >= 300 && c >= 500))
        {
            cnt++;
            chk[1] = 1;
        }
        if (a <= 5.0 && (b >= 200 && c >= 300))
        {
            cnt++;
            chk[2] = 1;
        }
        if (a <= 4.5 && (b >= 150 && c >= 200))
        {
            cnt++;
            chk[0] = 1;
        }
        if (cnt == 0)
            cout << "No positions";
        else
        {
            for (int i = 0; i < 3; i++)
            {
                cnt--;
                if (chk[i])
                    cout << s[i];
                if (cnt > 0)
                    cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}