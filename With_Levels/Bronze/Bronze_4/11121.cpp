// problem: Communication Channels
// id: 11121
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
        string a, b;
        cin >> a >> b;
        int itera, iterb;
        itera = a.length();
        iterb = b.length();
        if (itera != iterb)
            cout << "ERROR";
        else
        {
            bool isOk = true;
            for (int i = 0; i < itera; i++)
            {
                if (a[i] != b[i])
                {
                    isOk = false;
                    break;
                }
            }
            if (isOk)
                cout << "OK";
            else
                cout << "ERROR";
        }
        cout << '\n';
    }

    return 0;
}