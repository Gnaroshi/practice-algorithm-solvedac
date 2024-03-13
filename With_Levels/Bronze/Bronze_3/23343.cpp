// problem: JavaScript
// id: 23343
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool isI(string const &str)
{
    auto it = str.begin();
    while (it != str.end() && isdigit(*it))
        it++;
    return !str.empty() && it == str.end();
}

// int stoi(string s)
// {
//     int ret = 0;
//     int p = 1;
//     int iter = s.length();
//     for (int i = iter - 1; i >= 0; i--)
//     {
//         ret += p * (s[i] - '0');
//         p *= 10;
//     }
//     return ret;
// }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    if (!isI(a) || !isI(b))
        cout << "NaN";
    else
        cout << stoi(a) - stoi(b);
    return 0;
}