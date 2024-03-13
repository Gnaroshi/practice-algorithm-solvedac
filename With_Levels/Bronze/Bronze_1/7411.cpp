// problem: Decoding Task
// id: 7411
// time taken:
#include <bits/stdc++.h>
using namespace std;

char asc(char c)
{
    if (isalpha(c))
        return c - 'A' + 10;
    else
        return c - '0';
}

char th(char c)
{
    if (c >= 10)
        return char(c - 10 + 'A');
    else
        return char(c + '0');
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    vector<int> va, vb, vc;
    int iter = a.length() / 2;
    for (int i = 0; i < iter; i++)
        va.push_back(asc(a[i * 2]) * 16 + asc(a[i * 2 + 1]));
    iter++;
    for (int i = 0; i < iter; i++)
        vb.push_back(asc(b[i * 2]) * 16 + asc(b[i * 2 + 1]));

    vc.push_back(' ' ^ vb.front());
    for (int i = 1; i < iter; i++)
        vc.push_back(vc[i - 1] ^ va[i - 1] ^ vb[i]);
    for (int i = 0; i < iter; i++)
    {
        cout << th(vc[i] / 16) << th(vc[i] % 16);
    }

    return 0;
}