// problem: ID
// id: 9907
// time taken:
#include <bits/stdc++.h>
using namespace std;

int m[7] = {2, 7, 6, 5, 4, 3, 2};
char c[11] = {'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int ts = 0;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
        ts += (s[i] - '0') * m[i];
    cout << c[ts % 11];

    return 0;
}