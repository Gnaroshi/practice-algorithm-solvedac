// problem: Length and Frequency of Sentences
// id: 9793
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sc[76] = {0};
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        string s;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> s)
            cnt++;
        sc[cnt]++;
    }
    for (int i = 0; i < 76; i++)
    {
        if (sc[i] != 0)
            cout << i << ' ' << sc[i] << '\n';
    }

    return 0;
}