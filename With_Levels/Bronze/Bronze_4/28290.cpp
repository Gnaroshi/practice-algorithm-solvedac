; // problem: 안밖? 밖안? 계단? 역계단?
// id: 28290
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s == "fdsajkl;" || s == "jkl;fdsa")
        cout << "in-out";
    else if (s == "asdf;lkj" || s == ";lkjasdf")
        cout << "out-in";
    else if (s == "asdfjkl;")
        cout << "stairs";
    else if (s == ";lkjfdsa")
        cout << "reverse";
    else
        cout << "molu";

    return 0;
}