// problem: 거울, 오! 거울
// id: 4740
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s.length() == 3 && s == "***")
            break;
        int iter = s.length();
        for (int i = iter - 1; i >= 0; i--)
            cout << s[i];
        cout << '\n';
    }

    return 0;
}