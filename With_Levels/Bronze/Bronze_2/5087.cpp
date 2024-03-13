// problem: Card Cutting
// id: 5087
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, crd;
    while (true)
    {
        int a = 0, c;
        getline(cin, s);
        if (s[0] == '#')
            break;
        stringstream st;
        st.str(s);
        while (st >> crd)
        {
            if (crd == "*")
                break;
            if (crd[0] == 'A')
                a++;
            else
            {
                c = stoi(crd);
                if (c % 2)
                    a++;
                else
                    a--;
            }
        }
        if (a > 0)
            cout << "Cheryl\n";
        else if (a == 0)
            cout << "Draw\n";
        else
            cout << "Tania\n";
    }

    return 0;
}