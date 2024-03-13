// problem: Как покормить дракона
// id: 28840
// time taken:
#include <bits/stdc++.h>
using namespace std;

string rep(string s)
{
    string a = s;
    for (int i = 0; i < a.length(); i++)
        if (a[i] == ':')
            a[i] = ' ';
    return a;
}
int main(void)
{
    string a, b;
    cin >> a >> b;
    a = rep(a);
    b = rep(b);
    stringstream st;
    st.str(a);
    int ah, am, bh, bm, t;
    st >> ah >> am;
    am = ah * 60 + am;
    st.clear();
    st.str(b);
    st >> bh >> bm;
    bm = bh * 60 + bm + 1440;
    t = bm - am;
    printf("%02d:%02d", t / 60, t % 60);

    return 0;
}