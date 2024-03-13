// problem: Šifra
// id: 20959
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), t;
    set<int> is;
    for (int i = 0; i < iter; i++)
        if (isalpha(s[i]))
            s[i] = ' ';
    stringstream st;
    st.str(s);
    while (st >> t)
        is.insert(t);
    cout << is.size();

    return 0;
}