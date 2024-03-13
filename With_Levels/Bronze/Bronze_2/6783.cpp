// problem: English or French?
// id: 6783
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, cnt = 0;
    cin >> tc;
    cin.ignore();
    string s;
    while (tc--)
    {
        getline(cin, s);
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'S' || s[i] == 's')
                cnt--;
            else if (s[i] == 'T' || s[i] == 't')
                cnt++;
        }
    }
    if (cnt > 0)
        cout << "English";
    else
        cout << "French";

    return 0;
}