// problem: 더하기
// id: 10822
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, t;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
    }
    stringstream st;
    st.str(s);
    while (st >> t)
    {
        ans += t;
    }
    cout << ans;

    return 0;
}