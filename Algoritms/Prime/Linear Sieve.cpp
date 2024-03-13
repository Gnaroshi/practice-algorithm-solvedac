#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100000;
vector<int> p;
bool isp[SIZE];
void LS(int n)
{
    fill(isp, isp + SIZE, 1);
    for (int i = 2; i <= n; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j > n)
                break;
            isp[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }
    return;
}

int main(void)
{
    int n;
    cin >> n;
    LS(n);
    for (int i = 1; i <= n; i++)
        cout << isp[i] << ' ';
    cout << "------------\n";
    for (int i = 1; i <= p.size(); i++)
        cout << p[i] << ' ';

    return 0;
}