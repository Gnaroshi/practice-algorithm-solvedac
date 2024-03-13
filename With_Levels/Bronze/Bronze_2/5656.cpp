// problem: 비교 연산자
// id: 5656
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, op;
    for (int tcc = 1;; tcc++)
    {
        getline(cin, s);
        int iter = s.length(), a, b;
        stringstream st;
        st.str(s);
        st >> a >> op >> b;
        if (op == "E")
            break;
        cout << "Case " << tcc << ": ";
        bool chk;
        if (op == ">")
            chk = a > b;
        else if (op == ">=")
            chk = a >= b;
        else if (op == "<")
            chk = a < b;
        else if (op == "<=")
            chk = a <= b;
        else if (op == "==")
            chk = a == b;
        else if (op == "!=")
            chk = a != b;
        if (chk)
            cout << "true\n";
        else
            cout << "false\n";
    }

    return 0;
}