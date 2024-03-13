// problem: 두 개의 손
// id: 16675
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ml, mr, tl, tr;
    cin >> ml >> mr >> tl >> tr;
    if (tl == tr && ml == mr)
    {
        if (tl == 'R')
        {
            if (ml == 'P')
                cout << "MS";
            else if (ml == 'S')
                cout << "TK";
            else
                cout << "?";
        }
        else if (tl == 'S')
        {
            if (ml == 'P')
                cout << "TK";
            else if (ml == 'R')
                cout << "MS";
            else
                cout << "?";
        }
        else
        {
            if (ml == 'S')
                cout << "MS";
            else if (ml == 'R')
                cout << "TK";
            else
                cout << "?";
        }
    }
    else if (tl == tr)
    {
        if (tl == 'R')
        {
            if (mr == 'P' || ml == 'P')
                cout << "MS";
            else
                cout << "?";
        }
        else if (tl == 'S')
        {
            if (mr == 'R' || ml == 'R')
                cout << "MS";
            else
                cout << "?";
        }
        else
        {
            if (mr == 'S' || ml == 'S')
                cout << "MS";
            else
                cout << "?";
        }
    }
    else if (mr == ml)
    {
        if (mr == 'R')
        {
            if (tr == 'P' || tl == 'P')
                cout << "TK";
            else
                cout << "?";
        }
        else if (mr == 'S')
        {
            if (tr == 'R' || tl == 'R')
                cout << "TK";
            else
                cout << "?";
        }
        else
        {
            if (tr == 'S' || tl == 'S')
                cout << "TK";
            else
                cout << "?";
        }
    }
    else
        cout << "?";

    return 0;
}