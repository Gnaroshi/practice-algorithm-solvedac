// problem: 수열의 변화
// id: 1551
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t;
    cin >> n >> k;
    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        if (s[i] == ',')
            s[i] = ' ';
    stringstream st;
    st.str(s);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        st >> t;
        v.emplace_back(t);
    }
    vector<int> nv;
    while (k--)
    {
        nv.clear();
        for (int i = 1; i < n; i++)
            nv.emplace_back(v[i] - v[i - 1]);
        n--;
        v.resize(nv.size());
        copy(nv.begin(), nv.end(), v.begin());
    }
    iter = v.size();
    for (int i = 0; i < iter; i++)
        cout << v[i] << ((i != iter - 1) ? ',' : '\n');

    return 0;
}