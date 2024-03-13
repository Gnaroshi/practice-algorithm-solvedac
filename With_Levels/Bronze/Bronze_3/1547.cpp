#include <bits/stdc++.h>
using namespace std;

int one = 1;
int two = 0;
int three = 0;

void one_to_two()
{
    int temp;
    temp = one;
    one = two;
    two = temp;
    return;
}
void two_to_three()
{
    int temp;
    temp = two;
    two = three;
    three = temp;
    return;
}
void three_to_one()
{
    int temp;
    temp = one;
    one = three;
    three = temp;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if ((a == 1 && b == 2) || (a == 2 && b == 1))
        {
            one_to_two();
        }
        else if ((a == 2 && b == 3) || (a == 3 && b == 2))
        {
            two_to_three();
        }
        else
        {
            three_to_one();
        }
    }

    if (one == 1)
        cout << 1 << '\n';
    else if (two == 1)
        cout << 2 << '\n';
    else
        cout << 3 << '\n';

    return 0;
}