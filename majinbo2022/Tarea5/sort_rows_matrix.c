// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
  
#define SIZE 100
  
// Function to sort a matrix
void sort_matrix(int arr[SIZE][SIZE],
                 int N, int M)
{
  
    // Traverse over the matrix
    for (int i = 0; i < N; i++) {
  
        for (int j = 0; j < M; j++) {
  
            // Current minimum element
            int minimum = arr[i][j];
  
            // Index of the current
            // minimum element
            int z = i;
            int q = j;
  
            // Check if any smaller element
            // is present in the matrix
            int w = j;
  
            for (int k = i; k < N; k++) {
  
                for (; w < M; w++) {
  
                    // Update the minimum element
                    if (arr[k][w] < minimum) {
  
                        minimum = arr[k][w];
  
                        // Update the index of
                        // the minimum element
                        z = k;
                        q = w;
                    }
                }
                w = 0;
            }
  
            // Swap the current element
            // and the minimum element
            int temp = arr[i][j];
            arr[i][j] = arr[z][q];
            arr[z][q] = temp;
        }
    }
}
  
// Function to print the sorted matrix
void printMat(int arr[SIZE][SIZE],
              int N, int M)
{
    for (int i = 0; i < N; i++) {
  
        for (int j = 0; j < M; j++) {
  
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
  
// Driver Code
int main()
{
    int N = 3, M = 3;
    int arr[SIZE][SIZE]
        = { { 7, 8, 9 },
            { 5, 6, 4 },
            { 3, 1, 2 } };
  
    // Sort the matrix
    sort_matrix(arr, N, M);
  
    // Print the sorted matrix
    printMat(arr, N, M);
  
    return 0;
}