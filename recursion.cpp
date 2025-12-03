// Function calling itself is called recursion

// Application of Recursion
// 1. maintain stack

// there is master theory to calculate time complexity of recurrence realtion

#include <iostream>
using namespace std;

// int fact(int n)
// {

//     int f = 1;

//     for (int i = 0; i <= n; i++)
//     {
//         f = f * i;
//     }
// }

// int main()
// {

//     return 0;
// }

int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int a = fact(2);
    cout << "Value of a is :" << a;
    return 0;
}

// time complexity is order of n. O(n)

// why iterative code is more effective than recursion code

// iterative code is more batter than recursion cause internally recursion create stack  , takes more memory , takes more time cause cpu have to check
// same time complexity

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

// time complexity is O(2^n)
