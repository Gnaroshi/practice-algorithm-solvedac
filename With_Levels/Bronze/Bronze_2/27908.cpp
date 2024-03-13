// problem: Kalendar
// id: 27908
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, e, cur = 1;
    cin >> n >> d;
    cout << "+---------------------+\n";

    int iter = (n + d - 2) / 7 + 1;
    cur -= d - 1;
    for (int i = 0; i < iter; i++)
    {
        cout << "|";
        for (int j = 0; j < 7; j++)
        {
            if (cur < 1 || cur > n)
            {
                cout << "...";
            }
            else
            {
                if (cur < 10)
                    cout << "..";
                else
                    cout << '.';
                cout << cur;
            }
            cur++;
        }
        cout << "|\n";
    }
    cout << "+---------------------+";
    return 0;
}