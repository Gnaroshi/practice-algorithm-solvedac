// #include <stdio.h>

// int f(int n){
//     if (n == 0)return 1;
//     int sum = 0;
//     for (int i = 0 ; i < n; i++)
//         sum += f(i);
//     return sum % 13;
// }

// int main() {
//     char ans[] = "rgjgmbuyhbfcx";
//     for (int i = 0; i < 13; i++)
//         ans[i] ^= f(13 + i * i * i);
//     puts(ans);
//     return 0;
// }

#include <stdio.h>

#define MAX_N 100

int memo[MAX_N]; // Memoization array

int f(int n) {
    if (n == 0) return 1;
    if (memo[n] != 0) return memo[n]; // Return memoized result if available
    int sum = 1; // Initialize sum with 1 since f(0) is 1
    for (int i = 1; i < n; i++)
        sum += memo[i] ? memo[i] : f(i); // If memo[i] is not zero, use it, otherwise calculate f(i)
    return memo[n] = sum % 13; // Store the result in the memoization array
}

int main() {
    char ans[] = "rgjgmbuyhbfcx";
    for (int i = 0; i < 13; i++)
        ans[i] ^= f(13 + i * i * i);
    puts(ans);
    return 0;
}