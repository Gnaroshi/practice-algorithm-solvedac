// problem: Greetings!
// id: 17548
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'e')
            cout << 'e';
        cout << s[i];
    }

    return 0;
}