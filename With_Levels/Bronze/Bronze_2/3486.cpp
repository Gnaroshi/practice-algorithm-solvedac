// problem: Adding Reversed Numbers
// id: 3486
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
        int a, b;
        cin >> a >> b;
        string sa, sb;
        sa = to_string(a);
        sb = to_string(b);
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        a = stoi(sa) + stoi(sb);
        sa = to_string(a);
        reverse(sa.begin(), sa.end());
        cout << stoi(sa) << '\n';
    }

    return 0;
}