// problem: Timecard
// id: 20104
// time taken:
// 함수 구현

#include <bits/stdc++.h>
// #include "timecard.h"

static int N;

void init(int n)
{
    N = n;
}

std::string convert(std::string s)
{
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
