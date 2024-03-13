// problem: 디지털시계
// id: 1942
// time taken:
#include <bits/stdc++.h>
using namespace std;

int toi(int a)
{
    return a / 3600 * 10000 + (a % 3600) / 60 * 100 + (a % 3600) % 60;
}

int fn(string a)
{
    int ret = 0, iter = a.length(), t1 = 0, t2 = 0, t, h, m, s;
    for (int i = 0; i < iter; i++)
        if (a[i] == ':')
            a[i] = ' ';
    stringstream st;
    st.str(a);
    st >> h >> m >> s;
    t1 = h * 3600 + m * 60 + s;
    st >> h >> m >> s;
    t2 = h * 3600 + m * 60 + s;

    if (t1 > t2)
    {
        for (int i = t1; i < 86400; i++)
            ret += (toi(i) % 3 == 0);
        for (int i = 0; i <= t2; i++)
            ret += (toi(i) % 3 == 0);
    }
    else
    {
        for (int i = t1; i <= t2; i++)
            ret += (toi(i) % 3 == 0);
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a);
        cout << fn(a) << '\n';
    }

    return 0;
}