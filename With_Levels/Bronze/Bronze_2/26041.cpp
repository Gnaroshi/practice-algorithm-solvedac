// problem: 비슷한 전화번호 표시
// id: 26041
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a;
    int ans = 0, al;
    getline(cin, s);
    cin >> a;
    al = a.length();
    stringstream st;
    st.str(s);
    while (st >> s)
    {
        if (s == a || s.length() < al)
            continue;
        if (s.substr(0, al) == a)
            ans++;
    }
    cout << ans;

    return 0;
}