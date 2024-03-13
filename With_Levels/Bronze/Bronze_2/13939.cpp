// problem: Imena
// id: 13939
// time taken:
#include <bits/stdc++.h>
using namespace std;
bool lw(string v)
{
    return (v.back() == '.' || v.back() == '?' || v.back() == '!');
}

bool cn(string v)
{
    int iter = v.length();
    if (lw(v))
        iter--;
    for (int i = 0; i < iter; i++)
    {
        if (!isalpha(v[i]))
            return false;
    }
    return true && isupper(v.front());
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    cin.ignore();
    string s, t;
    vector<string> v;
    getline(cin, s);
    stringstream st;
    st.str(s);
    while (st >> t)
    {
        if (lw(t))
        {
            cnt += cn(t);
            cout << cnt << '\n';
            cnt = 0;
        }
        else
            cnt += cn(t);
    }

    return 0;
}