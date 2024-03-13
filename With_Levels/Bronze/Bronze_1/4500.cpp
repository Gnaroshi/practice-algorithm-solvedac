// problem: “Bubble Gum, Bubble Gum, in the dish, how many pieces do you wish?”
// id: 4500
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
        cin.ignore();
        vector<string> v;
        string s, t;
        int n, l;
        getline(cin, s);
        stringstream st;
        st.str(s);
        while (st >> t)
            v.push_back(t);
        l = v.size();
        cin >> t;
        cin >> n;
        n += find(v.begin(), v.end(), t) - v.begin();
        n--;
        n %= l;
        cout << v[n] << '\n';
    }

    return 0;
}