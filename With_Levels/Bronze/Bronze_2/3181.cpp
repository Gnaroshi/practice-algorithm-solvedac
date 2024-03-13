// problem: 줄임말 만들기
// id: 3181
// time taken:
#include <bits/stdc++.h>
using namespace std;
string ex[] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t, ans = "";
    getline(cin, s);
    stringstream st;
    st.str(s);
    bool isF = true;
    while (st >> t)
    {
        if (isF)
        {
            ans.push_back(t[0]);
            isF = false;
        }
        else
        {
            bool chk = true;
            for (auto i : ex)
            {
                if (t == i)
                {
                    chk = false;
                    break;
                }
            }
            if (chk)
                ans.push_back(t[0]);
        }
    }
    int iter = ans.length();
    for (int i = 0; i < iter; i++)
        cout << char(toupper(ans[i]));

    return 0;
}