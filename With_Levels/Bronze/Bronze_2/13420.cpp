// problem: 사칙연산
// id: 13420
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        stringstream st;
        st.str(s);
        long long a, b, c;
        char ca, cb;
        st >> a >> ca >> b >> cb >> c;
        bool chk;
        if (ca == '+')
            chk = (a + b == c);
        else if (ca == '-')
            chk = (a - b == c);
        else if (ca == '*')
            chk = (a * b == c);
        else if (ca == '/')
            chk = (a / b == c);
        cout << (chk ? "correct" : "wrong answer") << '\n';
    }

    return 0;
}