// problem: I Speak TXTMSG
// id: 6841
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string temp;
        cin >> temp;
        if (temp == "TTYL")
        {
            cout << "talk to you later\n";
            return 0;
        }
        if (temp == "CU")
            cout << "see you";
        else if (temp == ":-)")
            cout << "I’m happy";
        else if (temp == ":-(")
            cout << "I’m unhappy";
        else if (temp == ";-)")
            cout << "wink";
        else if (temp == ":-P")
            cout << "stick out my tongue";
        else if (temp == "(~.~)")
            cout << "sleepy";
        else if (temp == "TA")
            cout << "totally awesome";
        else if (temp == "CCC")
            cout << "Canadian Computing Competition";
        else if (temp == "CUZ")
            cout << "because";
        else if (temp == "TY")
            cout << "thank-you";
        else if (temp == "YW")
            cout << "you’re welcome";
        else
            cout << temp;

        cout << "\n";
    }

    return 0;
}