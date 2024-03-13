// problem: Average Character
// id: 24608
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length(), sum = 0;
    for (int i = 0; i < iter; i++)
    {
        sum += s[i];
    }
    cout << char(sum / iter);

    return 0;
}