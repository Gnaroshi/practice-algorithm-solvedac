// problem: Zegarek
// id: 26752
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    s++;
    if (s > 59)
    {
        m++;
        s = 0;
    }
    if (m > 59)
    {
        h++;
        m = 0;
    }
    if (h > 23)
        h = 0;
    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}