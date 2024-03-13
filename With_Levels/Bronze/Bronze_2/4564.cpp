// problem: 숫자 카드놀이
// id: 4564
// time taken:
#include <bits/stdc++.h>
using namespace std;

string nxt(string s)
{
    int t = 1;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        t *= s[i] - '0';
    return to_string(t);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n, a;
    while (true)
    {
        cin >> n;
        if (n == "0")
            break;
        a = n;
        while (true)
        {
            cout << a;
            if (a.length() == 1)
            {
                cout << '\n';
                break;
            }
            a = nxt(a);
            cout << ' ';
        }
    }

    return 0;
}