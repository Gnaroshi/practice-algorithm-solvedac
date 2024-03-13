// problem: ЧИСЛА МЕЖДУ БУКВИ
// id: 24304
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    bool chk = true;
    for (int i = 0; i < 4; i++)
    {
        if (isdigit(s[i]))
            chk = false;
        else
            s[i] = ' ';
    }
    if (chk)
    {
        cout << "N/A";
        return 0;
    }
    stringstream st;
    st.str(s);
    int t;
    while (st >> t)
    {
        cout << n * t << '\n';
    }

    return 0;
}