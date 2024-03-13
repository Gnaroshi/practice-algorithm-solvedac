// problem: 5와 6의 차이
// id: 2864
// time taken:
#include <bits/stdc++.h>
using namespace std;

int tr(string s, int iter, char to, char fr)
{
    string t = s;
    for (int i = 0; i < iter; i++)
        if (t[i] == to)
            t[i] = fr;
    return stoi(t);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int ia = a.length();
    int ib = b.length();
    cout << tr(a, ia, '6', '5') + tr(b, ib, '6', '5') << ' ';
    cout << tr(a, ia, '5', '6') + tr(b, ib, '5', '6');

    return 0;
}