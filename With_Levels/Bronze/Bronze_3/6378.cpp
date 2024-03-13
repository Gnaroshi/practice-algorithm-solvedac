// problem: 디지털 루트
// id: 6378
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fst(string a)
{
    int ret = 0;
    int iter = a.length();
    for (int i = 0; i < iter; i++)
        ret += a[i] - '0';
    return ret;
}

int snd(int a)
{
    int ret = 0;
    while (a > 0)
    {
        ret += a % 10;
        a /= 10;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    while (true)
    {
        cin >> n;
        if (n == "0")
            break;
        int t = fst(n);
        if (t / 10 != 0)
        {
            while (t / 10 > 0)
            {
                t = snd(t);
            }
        }
        cout << t << '\n';
    }

    return 0;
}