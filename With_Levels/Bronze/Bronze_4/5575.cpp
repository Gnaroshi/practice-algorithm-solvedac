#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        int ch, cm, cs, oh, om, os;
        cin >> ch >> cm >> cs >> oh >> om >> os;
        if (os - cs < 0)
        {
            os += 60;
            os -= cs;
            om--;
        }
        else
            os -= cs;
        if (om - cm < 0)
        {
            om += 60;
            om -= cm;
            oh--;
        }
        else
            om -= cm;
        oh -= ch;

        cout << oh << " " << om << " " << os << '\n';
    }

    return 0;
}