// problem: 파일 완전 삭제
// id: 9243
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter;
    string a, b;
    cin >> n >> a >> b;
    iter = a.length();
    if (n % 2)
    {
        for (int i = 0; i < iter; i++)
        {
            if (a[i] == b[i])
            {
                cout << "Deletion failed";
                return 0;
            }
        }
    }
    else
    {
        if (a != b)
        {
            cout << "Deletion failed";
            return 0;
        }
    }
    cout << "Deletion succeeded";

    return 0;
}