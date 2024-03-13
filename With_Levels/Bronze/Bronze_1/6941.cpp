// problem: Calendar
// id: 6941
// time taken:
#include <bits/stdc++.h>
using namespace std;

string day(int n)
{
    if (n == 0)
        return "   ";
    string ret = "";
    string t = to_string(n);
    for (int i = 0; i < 3 - t.length(); i++)
        ret += ' ';
    ret += t;
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << "Sun Mon Tue Wed Thr Fri Sat\n";
    vector<int> v(a + b - 1);
    for (int i = 0; i < a - 1; i++)
        v[i] = 0;
    iota(v.begin() + a - 1, v.end(), 1);

    for (int i = 0; i < a + b - 1; i++)
    {
        cout << day(v[i]);
        if (i % 7 == 6)
            cout << '\n';
        else if (i != a + b - 2)
            cout << ' ';
    }

    return 0;
}