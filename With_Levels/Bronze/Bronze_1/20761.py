# problem: Alloys
# id: 20761
# time taken:
# #include <bits/stdc++.h>
# using namespace std;
# int main(void)
# {
#     ios::sync_with_stdio(false);
#     cin.tie(nullptr);

#     double c;
#     cin >> c;
#     cout << fixed;
#     cout.precision(6);
#     cout << min(1.0, (c * c) / 4.0);

#     return 0;
# }

print(min(1, float(input())) ** 2 / 4)
