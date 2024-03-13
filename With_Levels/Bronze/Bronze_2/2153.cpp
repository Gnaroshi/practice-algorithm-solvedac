// problem: 소수 단어
// id: 2153
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int sum = 0, iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (islower(s[i]))
            sum += s[i] - 'a' + 1;
        else
            sum += s[i] - 'A' + 27;
    }
    int cnt = 0;
    for (int i = 1; i * i <= sum; i++)
    {
        if (sum % i == 0)
            cnt++;
    }
    if (cnt == 1)
        cout << "It is a prime word.";
    else
        cout << "It is not a prime word.";

    return 0;
}