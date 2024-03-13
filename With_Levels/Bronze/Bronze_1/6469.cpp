// problem: Uniform Generator
// id: 6469
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int sp, m, cur;
    while (getline(cin, s))
    {
        stringstream st;
        st.str(s);
        st >> sp >> m;
        cout.width(10);
        cout << sp;
        cout.width(10);
        cout << m;
        set<int> sq;
        cur = 0;
        sq.insert(0);
        while (true)
        {
            cur = (cur + sp) % m;
            if (sq.find(cur) != sq.end())
                break;
            sq.insert(cur);
        }
        if (sq.size() == m)
            cout << " Good Choice\n";
        else
            cout << " Bad Choice\n";
        cout << '\n';
    }

    return 0;
}
