#include <bits/stdc++.h>
using namespace std;

char dna[4][4];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string temp;
    cin >> temp;

    dna[0][0] = 'A';
    dna[0][1] = 'C';
    dna[0][2] = 'A';
    dna[0][3] = 'G';
    dna[1][0] = 'C';
    dna[1][1] = 'G';
    dna[1][2] = 'T';
    dna[1][3] = 'A';
    dna[2][0] = 'A';
    dna[2][1] = 'T';
    dna[2][2] = 'C';
    dna[2][3] = 'G';
    dna[3][0] = 'G';
    dna[3][1] = 'A';
    dna[3][2] = 'G';
    dna[3][3] = 'T';

    while (true)
    {
        if (n == 1)
            break;

        if (temp[n - 2] == 'A')
        {
            if (temp[n - 1] == 'A')
            {
                temp[n - 2] = dna[0][0];
            }
            else if (temp[n - 1] == 'G')
            {
                temp[n - 2] = dna[0][1];
            }
            else if (temp[n - 1] == 'C')
            {
                temp[n - 2] = dna[0][2];
            }
            else if (temp[n - 1] == 'T')
            {
                temp[n - 2] = dna[0][3];
            }
        }
        else if (temp[n - 2] == 'G')
        {
            if (temp[n - 1] == 'A')
            {
                temp[n - 2] = dna[1][0];
            }
            else if (temp[n - 1] == 'G')
            {
                temp[n - 2] = dna[1][1];
            }
            else if (temp[n - 1] == 'C')
            {
                temp[n - 2] = dna[1][2];
            }
            else if (temp[n - 1] == 'T')
            {
                temp[n - 2] = dna[1][3];
            }
        }
        else if (temp[n - 2] == 'C')
        {
            if (temp[n - 1] == 'A')
            {
                temp[n - 2] = dna[2][0];
            }
            else if (temp[n - 1] == 'G')
            {
                temp[n - 2] = dna[2][1];
            }
            else if (temp[n - 1] == 'C')
            {
                temp[n - 2] = dna[2][2];
            }
            else if (temp[n - 1] == 'T')
            {
                temp[n - 2] = dna[2][3];
            }
        }
        else if (temp[n - 2] == 'T')
        {
            if (temp[n - 1] == 'A')
            {
                temp[n - 2] = dna[3][0];
            }
            else if (temp[n - 1] == 'G')
            {
                temp[n - 2] = dna[3][1];
            }
            else if (temp[n - 1] == 'C')
            {
                temp[n - 2] = dna[3][2];
            }
            else if (temp[n - 1] == 'T')
            {
                temp[n - 2] = dna[3][3];
            }
        }

        n--;
    }

    cout << temp[0] << '\n';

    return 0;
}