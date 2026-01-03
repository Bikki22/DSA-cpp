#include <iostream>
using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     };

//     return 0;
// }

// WAP to find maximum element in an array?

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int max = arr[0];

//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     cout << "maximum element is: " << max << endl;

//     return 0;
// }

// Given an integer array nums sorted in non - decreasing order, remove the duplicates in - place such that each unique element appears only once.The relative order of the elements should be kept the same.Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​.After removing duplicates, return the number of unique elements k.The first k elements of nums should contain the unique numbers in sorted order.The remaining elements beyond index k - 1 can be ignored.

// int removeDuplicate(int a[], int n)
// {
//     int k = 1;
//     int temp[n];
//     temp[0] = a[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] == a[i - 1])
//         {
//             continue;
//         }
//         else
//         {
//             temp[k] = a[i];
//             k++;
//         }
//     }

//     for (int i = 0; i < k; i++)
//     {
//         a[i] = temp[i];
//     }
//     return k;
// }

// Merge Sorted Array

// int main()
// {
//     int num1[6] = {1, 2, 3};
//     int num2[3] = {2, 5, 6};
//     int m = 3;
//     int n = 3;

//     int k = m + n - 1;
//     int i = m - 1;
//     int j = n - 1;

//     while (i >= 0 && j >= 0)
//     {
//         if (num1[i] > num2[j])
//         {
//             num1[k] = num1[i];
//             i--;
//             k--;
//         }
//         else
//         {
//             num1[k] = num2[j];
//             j--;
//             k--;
//         }
//     }

//     while (j >= 0)
//     {
//         num1[k] = num2[j];
//         j--;
//         k--;
//     }
//     return 0;
// }

// Island problem

// int main()
// {
//     int perimeter = 0;
//     int rows = grid.size();
//     int cols = grid[0].size();

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 // check all four directions
//                 if (j == 0 || grid[i][j] == 0) // left
//                     perimeter++;
//                 if (j == cols - 1 || grid[i][j + 1] == 0) // right
//                     perimeter++;
//                 if (i == 0 || grid[i - 1][j] == 0) // top
//                     perimeter++;
//                 if (i == rows - 1 || grid[i + 1][j] == 0) // bottom
//                     perimeter++;
//             }
//         }
//     };
//     return perimeter;
// }

// 169;
// 283;
// 349;
// 506;




