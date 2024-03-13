// problem: 화성 수학
// id: 5355
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(2);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string o;
        char p;
        double n;
        cin >> n;
        getline(cin, o);
        stringstream st;
        st.str(o);
        while (st >> p)
        {
            if (p == '@')
                n *= 3.0;
            else if (p == '%')
                n += 5.0;
            else
                n -= 7.0;
        }
        cout << n << '\n';
    }

    return 0;
}