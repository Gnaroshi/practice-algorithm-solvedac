// problem: Spacer
// id: 8826
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'E')
                a++;
            else if (s[i] == 'W')
                a--;
            else if (s[i] == 'S')
                b++;
            else
                b--;
        }
        cout << abs(a) + abs(b) << '\n';
    }

    return 0;
}