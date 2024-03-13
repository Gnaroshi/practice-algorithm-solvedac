// problem: B번 - FizzBuzz
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c, t;
    cin >> a >> b >> c;
    int i;
    if (!isalpha(a[0]))
        i = stoi(a) + 3;
    else if (!isalpha(b[0]))
        i = stoi(b) + 2;
    else if (!isalpha(c[0]))
        i = stoi(c) + 1;
    if (i % 3 == 0 && i % 5 == 0)
        t = "FizzBuzz";
    else if (i % 3 == 0)
        t = "Fizz";
    else if (i % 5 == 0)
        t = "Buzz";
    else
        t = to_string(i);
    cout << t;

    return 0;
}