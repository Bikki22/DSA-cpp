#include <iostream>
using namespace std;

// int main()
// {
//     int x, y, z; // 3s
//     z = x + y;   // 2s
//     cout << z;   // 1s
//     return 0;    // 1s
// }

// constant time is denoted by 1. so, O(1). it's in worst case
// By default we have to compute worst case

// int main()
// {
//     int a, b, c, d, e, f; // 6s
//     a = b + c + d;        // 3s
//     f = 2 * a - c * d;    // 4s
//     cout << a << b << c;  // 3s
//     return 0;             // 1s
// }

// approx 17s which is a fixed time so we denote that with 1. so its time complexity is O(1)

//  Linear Time complexity

// int main()
// {
//     int a, b, c, d, n;          // 5s
//     a = b + c;                  // 2s
//     cin >> n;                   // 1s
//     for (int i = 0; i < n; i++) // 2n+1s
//     {
//         a++; // n sec
//     };
//     return 0; // 1s
// }

// approx 3n+10 sec . so in linear time complexity it's 3n+10 is nearly equal to n so we can write here O(n)

// int main()
// {
//     int a, b, c, n;                 // 4s  O(1)
//     a = b + c;                      // 2s O(1)
//     for (int i = 0; i < n / 2; i++) // (n/2+1)  nearly equal to O(n)
//     {
//         a++; // 1s  O(n)
//     }
//     return 0; // 1s    O(1)
// }

// so the time complexity is O(n)

// int main()
// {
//     int n;                          // 1s
//     for (int i = 0; i < n / 3; i++) // O(n/3)
//     {
//         cout << "chai code"; // O(n)
//     };

//     for (int j = 0; j < n; j = j + 2) // O(n/2)
//     {
//         cout << "hello"; // O(n)
//     };
//     return 0; // O(1)
// }

// Most dominating is O(n)

// Quadratic equation

// int main()
// {
//     int a, b, c, n;             // 4s
//     for (int i = 0; i < n; i++) // O(n)
//     {
//         for (int j = 0; j < n; j++) // n * n
//         {
//             a = b + c; // n^2
//         }
//     }
//     cout << a;
//     return 0;
// }

// Most dominating is O(n^2)

// cubic equation

// int main()
// {
//     int a, n;

//     for (int i = 0; i < n / 3; i++) // O(n)  = n/3
//     {
//         for (int j = 0; j < n / 4; j++) // n/3 * n/4
//         {
//             for (int k = 0; k < n; k++) // n^2/12 * n = n^3/12
//             {
//                 a++; // n^3/12
//             }
//         }
//     }

//     return 0;
// }

// therefore O(n^3)

// logarithmetic TC:

// int main()
// {
//     int a, b, c, n;  // O(1)
//     a = b + c;    O(1)
//     for (int i = 1; i < n; i = i * 2) // run k Times
//     {
//         b++;
//     }
//     return 0;
// }

// 2^k = n
// log2^k = logn
// klog2 = logn
// k = logn / log2
// k = log2n     log base 2 and n  we can ignore cnstant

// so it runs O(logn)
// if i = i * 2 which is exponentially growing so we can directly say that the time complexity is O(logn)

// int main()
// {
//     int n, a, b, c;
//     for (int i = 0; i >= 1; i = i / 2) // same like before O(logn)
//     {
//         a = b + c;
//     }
// }

// int main()
// {
//     int a, n;
//     for (int i = 0; i < n / 2; i++) // n/2
//     {
//         for (int j = 1; j < n; j = j * 3) // n/2 * log3n
//         {
//             a++;
//         }
//     };
//     return 0;
// }

// so time complexity of will be O(nlogn)

// int main()
// {
//     int a, n;
//     for (int i = 0; i < n; i = i + 3) // n
//     {
//         for (int j = 0; j < n; j = j * 4) // n*log4n
//         {
//             for (int k = 0; k >= 1; k = k / 3) // n* log4n * log3n
//             {
//                 a++;
//             }
//         }
//     }
//     return 0;
// }

// so the time complexity of this is O[n(logn) ^ 2]

// int main()
// {
//     int a, n, b, c;
//     for (int i = 0; i < n; i++) // n
//     {
//         a = b + c;
//     }

//     for (int j = 0; j < n; j++) // n
//     {
//         for (int k = 0; k < n; k = k + 2) // n * n
//         {
//             for (int l = 0; l < n; l = l * 2) // n*n*logn
//             {
//                 a++; // O(n^2logn)
//             }
//         }
//     }
//     return 0;
// }
//
// so we have to chooose most dominating n^2logn

// Here you have to understand
// 1 < logn < n < nlogn < n^2 < n^3 < a^n < n!