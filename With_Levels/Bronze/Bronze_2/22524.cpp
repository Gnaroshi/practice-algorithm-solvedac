// problem: koukyoukoukokukikou
// id: 22524
// time taken:
#include <bits/stdc++.h>
using namespace std;
string lf = "qwertasdfgzxcvb";
bool isL(char c)
{
    return (lf.find(c) == string::npos);
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        int iter = s.length(), cnt = 0;
        bool bef = isL(s[0]), cur;
        for (int i = 1; i < iter; i++)
        {
            cur = isL(s[i]);
            if (bef != cur)
                cnt++;
            bef = cur;
        }
        cout << cnt << '\n';
    }

    return 0;
}