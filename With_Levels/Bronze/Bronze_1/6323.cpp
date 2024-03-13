// problem: Carbon Dating
// id: 6323
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcc = 1;
    double w, d, t;
    while (true)
    {
        cin >> w >> d;
        if (w + d <= 0.00001)
            break;
        t = log2(810 * w / d) * 5730;
        if (t >= 10000)
            t = round(t / 1000) * 1000;
        else
            t = round(t / 100) * 100;
        cout << "Sample #" << tcc++ << "\n";
        cout << "The approximate age is " << t << " years.\n\n";
    }

    return 0;
}