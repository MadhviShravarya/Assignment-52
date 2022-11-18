#include <bits/stdc++.h>
using namespace std;
 
// Function to find the maximum element
// with the minimum frequency
int maxElementWithMinFreq(int* arr, int N)
{
    // Stores the frequency of array
    // elements
    unordered_map<int, int> mp;
 
    // Find the frequency and store
    // in the map
    for (int i = 0; i < N; i++) {
        mp[arr[i]]++;
    }
 
    // Initialize minFreq to the maximum
    // value and minValue to the minimum
    int minFreq = INT_MAX;
    int maxValue = INT_MIN;
 
    // Traverse the map mp
    for (auto x : mp) {
 
        int num = x.first;
        int freq = x.second;
 
        // If freq < minFreq, then update
        // minFreq to freq and maxValue
        // to the current element
        if (freq < minFreq) {
            minFreq = freq;
            maxValue = num;
        }
 
        // If freq is equal to the minFreq
        // and current element > maxValue
        // then update maxValue to the
        // current element
        else if (freq == minFreq
                 && maxValue < num) {
            maxValue = num;
        }
    }
 
    // Return the resultant maximum value
    return maxValue;
}
 
// Driver Code
int main()
{
    int arr[] = { 2, 2, 5, 50, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << maxElementWithMinFreq(arr, N);
 
    return 0;
}
