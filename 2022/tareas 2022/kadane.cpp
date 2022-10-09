#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate Maximum Subarray Sum
// or Kadane's Algorithm
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
// Function to find the maximum
// sum after given operations
int maxSum(int a[], int n)
{
    // To store sum of all elements
    int S = 0;
 
    // Maximum sum of a subarray
    int S1 = maxSubArraySum(a, n);
 
    // Calculate the sum of all elements
    for (int i = 0; i < n; i++)
        S += a[i];
 
    return (2 * S1 - S);
}
 
// Driver Code
int main()
{
    int a[] = { -35, 32, -24, 0, 27, -10, 0, -19 };
 
    // size of an array
    int n = sizeof(a) / sizeof(a[0]);
 
    cout << maxSum(a, n);
 
    return 0;
}