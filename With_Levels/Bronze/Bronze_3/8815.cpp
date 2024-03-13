// problem: Test
// id: 8815
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    string s = "ABCBCDCDADAB";
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        n--;
        n %= 12;

        cout << s[n] << '\n';
    }

    return 0;
}