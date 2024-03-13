// problem: Arbiter Login
// id: 9388
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case " << tcc << ": ";
        string a, b, ca, na, cna;
        bool isn = false;
        cin >> a >> b;
        ca = na = cna = "";
        if (a == b)
        {
            cout << "Login successful.\n";
            continue;
        }
        else
            cout << "Wrong password.";
        for (auto i : a)
        {
            if (isalpha(i))
            {
                if (isupper(i))
                    ca += tolower(i), cna += tolower(i);
                else
                    ca += toupper(i), cna += toupper(i);
                na += i;
            }
            else
                ca += i, isn = true;
        }
        bool cc = (b == ca), cn = (b == na), ccn = (b == cna && isn);
        if (ccn)
            cout << " Please, check your caps lock and num lock keys.";
        else if (cc)
            cout << " Please, check your caps lock key.";
        else if (cn)
            cout << " Please, check your num lock key.";
        cout << '\n';
    }

    return 0;
}