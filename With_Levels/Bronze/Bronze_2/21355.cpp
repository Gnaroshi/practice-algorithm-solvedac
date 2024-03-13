// problem: Personnummer
// id: 21355
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int t = stoi(s.substr(0, 2));
    if (s[6] == '+')
    {
        if (t < 20)
            cout << 19;
        else
            cout << 18;
    }
    else
    {
        if (t <= 20)
            cout << 20;
        else
            cout << 19;
    }
    cout << s.substr(0, 6) << s.substr(7, 4);

    return 0;
}