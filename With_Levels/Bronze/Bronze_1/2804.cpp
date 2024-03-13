// problem: 크로스워드 만들기
// id: 2804
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int la = a.length(), lb = b.length(), ca, cb;
    bool chk = false;
    for (int i = 0; i < la; i++)
    {
        if (chk)
            break;
        for (int j = 0; j < lb; j++)
        {
            if (a[i] == b[j])
            {
                ca = i;
                cb = j;
                chk = true;
                break;
            }
        }
    }
    for (int i = 0; i < lb; i++)
    {
        for (int j = 0; j < la; j++)
        {
            if (j == ca)
                cout << b[i];
            else if (i == cb)
                cout << a[j];
            else
                cout << '.';
        }
        cout << '\n';
    }

    return 0;
}