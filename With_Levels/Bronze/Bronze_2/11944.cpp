// problem: NN
// id: 11944
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n, s = "";
    int m, t = 0, l, in;
    cin >> n >> m;
    l = n.length();
    in = stoi(n);
    if (l * in > m)
    {
        int iter = m / l;
        for (int i = 0; i < iter; i++)
            cout << n;
        if (m % l)
            cout << n.substr(0, m % l);
    }
    else
    {
        for (int i = 0; i < in; i++)
            cout << n;
    }

    return 0;
}