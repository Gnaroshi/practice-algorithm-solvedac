// problem: 홀수일까 짝수일까
// id: 5988
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> s;
        int t = s[s.length() - 1] - '0';
        if (t % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }

    return 0;
}