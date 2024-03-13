// problem: IBM 빼기 1
// id: 6321
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "String #" << i << '\n';
        string s;
        cin >> s;
        int iter = s.length();
        for (int j = 0; j < iter; j++)
        {
            if (s[j] == 'Z')
                s[j] = 'A';
            else
                s[j]++;
        }
        cout << s << '\n';
        if (i < tc)
            cout << '\n';
    }

    return 0;
}