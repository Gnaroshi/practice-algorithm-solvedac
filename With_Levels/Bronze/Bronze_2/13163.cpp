// problem: 닉네임에 갓 붙이기
// id: 13163
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
        string s, a;
        getline(cin, s);
        stringstream st;
        st.str(s);
        bool chk = true;
        while (st >> a)
        {
            if (chk)
            {
                cout << "god";
                chk = false;
            }
            else
                cout << a;
        }
        cout << '\n';
    }

    return 0;
}