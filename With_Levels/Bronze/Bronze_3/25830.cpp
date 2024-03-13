// problem: Microwave Mishap
// id: 25830
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    int t1 = ((s[0] - '0') * 10 + s[1] - '0') * 60 + (s[3] - '0') * 10 + s[4] - '0';
    int t2 = ((s[0] - '0') * 10 + s[1] - '0') * 3600 + ((s[3] - '0') * 10 + s[4] - '0') * 60;
    t2 -= t1;
    printf("%02d:%02d:%02d", t2 / 3600, (t2 % 3600) / 60, (t2 % 3600) % 60);
    return 0;
}