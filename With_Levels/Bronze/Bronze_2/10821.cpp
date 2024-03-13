// problem: 정수의 개수
// id: 10821
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    string s, t;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
    }
    stringstream st;
    st.str(s);
    while (st >> t)
    {
        v.emplace_back(t);
    }
    cout << v.size();

    return 0;
}