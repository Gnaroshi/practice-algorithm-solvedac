// problem: 박사 과정
// id: 5026
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
        string s;
        cin >> s;
        if (s == "P=NP")
        {
            cout << "skipped\n";
            continue;
        }
        int iter = s.length(), a, b;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '+')
            {
                s[i] = ' ';
                break;
            }
        }
        stringstream st;
        st.str(s);
        st >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}