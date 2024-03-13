#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    getline(cin, temp);
    int iter = temp.length();
    for (int i = 0; i < iter; i++)
    {
        if (temp[i] == 'A' || temp[i] == 'a')
            cout << '@';
        else if (temp[i] == 'B' || temp[i] == 'b')
            cout << '8';
        else if (temp[i] == 'C' || temp[i] == 'c')
            cout << '(';
        else if (temp[i] == 'D' || temp[i] == 'd')
            cout << "|)";
        else if (temp[i] == 'E' || temp[i] == 'e')
            cout << '3';
        else if (temp[i] == 'F' || temp[i] == 'f')
            cout << '#';
        else if (temp[i] == 'G' || temp[i] == 'g')
            cout << '6';
        else if (temp[i] == 'H' || temp[i] == 'h')
            cout << "[-]";
        else if (temp[i] == 'I' || temp[i] == 'i')
            cout << '|';
        else if (temp[i] == 'J' || temp[i] == 'j')
            cout << "_|";
        else if (temp[i] == 'K' || temp[i] == 'k')
            cout << "|<";
        else if (temp[i] == 'L' || temp[i] == 'l')
            cout << '1';
        else if (temp[i] == 'M' || temp[i] == 'm')
            cout << "[]\\/[]";
        else if (temp[i] == 'N' || temp[i] == 'n')
            cout << "[]\\[]";
        else if (temp[i] == 'O' || temp[i] == 'o')
            cout << '0';
        else if (temp[i] == 'P' || temp[i] == 'p')
            cout << "|D";
        else if (temp[i] == 'Q' || temp[i] == 'q')
            cout << "(,)";
        else if (temp[i] == 'R' || temp[i] == 'r')
            cout << "|Z";
        else if (temp[i] == 'S' || temp[i] == 's')
            cout << '$';
        else if (temp[i] == 'T' || temp[i] == 't')
            cout << "']['";
        else if (temp[i] == 'U' || temp[i] == 'u')
            cout << "|_|";
        else if (temp[i] == 'V' || temp[i] == 'v')
            cout << "\\/";
        else if (temp[i] == 'W' || temp[i] == 'w')
            cout << "\\/\\/";
        else if (temp[i] == 'X' || temp[i] == 'x')
            cout << "}{";
        else if (temp[i] == 'Y' || temp[i] == 'y')
            cout << "`/";
        else if (temp[i] == 'Z' || temp[i] == 'z')
            cout << '2';
        else
            cout << temp[i];
    }

    return 0;
}