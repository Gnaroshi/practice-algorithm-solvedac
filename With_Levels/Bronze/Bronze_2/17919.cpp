// problem: Östgötska
// id: 17919
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0, aec = 0;
    string s, t;
    getline(cin, s);
    stringstream st;
    st.str(s);
    while (st >> t)
    {
        if (t.find("ae") != string::npos)
            aec++;
        cnt++;
    }
    cnt *= 100, aec *= 100;
    if (cnt / 10 * 4 <= aec)
        cout << "dae ae ju traeligt va";
    else
        cout << "haer talar vi rikssvenska";

    return 0;
}