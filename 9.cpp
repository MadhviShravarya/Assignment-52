#include <bits/stdc++.h>
using namespace std;
 
// Function to find the count of elements whose
// squares are already present int the array
void countSquares(int arr[], int N)
{
    // Stores the required count
    int count = 0;
 
    // Traverse the array
    for (int i = 0; i < N; i++) {
 
        // Square of the element
        int square = arr[i] * arr[i];
 
        // Traverse the array
        for (int j = 0; j < N; j++) {
 
            // Check whether the value
            // is equal to square
            if (arr[j] == square) {
 
                // Increment count
                count = count + 1;
            }
        }
    }
 
    // Print the count
    cout << count;
}
 
// Driver Code
int main()
{
    // Given array
    int arr[] = { 2, 4, 5, 20, 16 };
 
    // Size of the array
    int N = sizeof(arr) / sizeof(arr[0]);
 
    countSquares(arr, N);
 
    return 0;
}
