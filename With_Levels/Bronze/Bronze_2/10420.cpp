// problem: 기념일 1
// id: 10420
// time taken:
#include <bits/stdc++.h>
using namespace std;
int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(void)
{
    int n;
    cin >> n;
    int y = 2014, m = 4, d = 2;
    while (n > 1)
    {
        d++;
        bool yy = ((y % 4 == 0 && y % 100) || y % 400 == 0);
        if (m == 2 && d > 28)
        {
            if (yy && d > 29)
                m++, d = 1;
            else if (!yy)
                m++, d = 1;
        }
        else if (d > md[m - 1])
            m++, d = 1;
        if (m > 12)
            y++, m = 1;
        n--;
    }
    printf("%d-%02d-%02d", y, m, d);

    return 0;
}