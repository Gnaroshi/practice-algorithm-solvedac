// problem: Split
// id: 21955
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << s.substr(0, s.length() / 2) << ' ' << s.substr(s.length() / 2, s.length() / 2);

    return 0;
}