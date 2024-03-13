// problem: 빅데이터? 정보보호!
// id: 26264
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int t = 0;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 's')
        {
            t++;
            i += 7;
        }
        else
        {
            t--;
            i += 6;
        }
    }
    if (t > 0)
        cout << "security!";
    else if (t < 0)
        cout << "bigdata?";
    else
        cout << "bigdata? security!";

    return 0;
}
