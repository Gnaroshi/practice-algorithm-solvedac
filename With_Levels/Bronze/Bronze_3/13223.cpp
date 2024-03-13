// problem: 소금 폭탄
// id: 13223
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    cin >> temp;
    int h1, m1, s1;
    for (int i = 0; i < temp.length(); i++)
        temp[i] -= '0';
    h1 = temp[0] * 10 + temp[1];
    m1 = temp[3] * 10 + temp[4];
    s1 = temp[6] * 10 + temp[7];
    cin >> temp;
    int h2, m2, s2;
    for (int i = 0; i < temp.length(); i++)
        temp[i] -= '0';
    h2 = temp[0] * 10 + temp[1];
    m2 = temp[3] * 10 + temp[4];
    s2 = temp[6] * 10 + temp[7];
    if (h2 == h1 && m2 == m1 && s2 == s1)
    {
        cout << "24:00:00";
        return 0;
    }

    int ansh, ansm, anss;
    ansh = ansm = anss = 0;
    anss = s2 - s1;
    if (anss < 0)
    {
        anss += 60;
        ansm -= 1;
    }
    ansm += m2 - m1;
    if (ansm < 0)
    {
        ansm += 60;
        ansh -= 1;
    }
    ansh += h2 - h1;
    if (ansh < 0)
    {
        ansh += 24;
    }
    printf("%02d:%02d:%02d\n", ansh, ansm, anss);

    return 0;
}