// problem: 99 Problems
// id: 25270
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int uc = n, dc = n;
    while (true)
    {
        if (uc % 100 == 99)
        {
            cout << uc;
            break;
        }
        else if (dc % 100 == 99 && dc > 0)
        {
            cout << dc;
            break;
        }
        uc++;
        dc--;
    }

    return 0;
}