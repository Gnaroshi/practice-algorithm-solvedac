// problem: Decoder
// id: 5365
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n;
    int bef;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (i == 0)
        {
            bef = s.length();
            cout << s[0];
        }
        else
        {
            if (bef > s.length())
                cout << ' ';
            else
                cout << s[bef - 1];
            bef = s.length();
        }
    }

    return 0;
}