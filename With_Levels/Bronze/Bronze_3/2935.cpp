// problem: 소음
// id: 2935
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, ss;
    char c;
    cin >> s >> c >> ss;
    int is = s.length();
    int iss = ss.length();
    if (c == '*')
    {
        int iter = is + iss - 1;
        cout << 1;
        for (int i = 1; i < iter; i++)
            cout << 0;
    }
    else
    {
        if (is < iss)
            swap(is, iss);
        if (is == iss)
        {
            cout << 2;
            for (int i = 1; i < is; i++)
                cout << 0;
        }
        else
        {
            int chk = is - iss;
            cout << 1;
            for (int i = 1; i < is; i++)
            {
                if (i == chk)
                    cout << 1;
                else
                    cout << 0;
            }
        }
    }

    return 0;
}