// A C++ program that returns true if there is a Pythagorean 
// Triplet in a given array. 
#include <iostream> 
#include <algorithm> 
  
using namespace std; 

// Returns true if there is a triplet with following property 
// A[i]*A[i] = A[j]*A[j] + A[k]*[k] 
// Note that this function modifies given array 
bool isTriplet(int arr[], int n) 
{ 
    // Square array elements 
    for (int i=0; i<n; i++) 
        arr[i] = arr[i]*arr[i]; 
  
    // Sort array elements 
    sort(arr, arr + n); 
  
    // Now fix one element one by one and find the other two 
    // elements 
    for (int i = n-1; i >= 2; i--) 
    { 
        int l=0;
        int r=i-1;
        while(l<r)
        {
            if(arr[i]=arr[l]+arr[r])return true;
            
            // Else either move 'l' or 'r' 
            (arr[l] + arr[r] < arr[i])?  l++: r--; 
        }
    } 
  
    // If we reach here, then no triplet found 
    return false; 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int arr[] = {3, 1, 4, 6, 5}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    isTriplet(arr, arr_size)? cout << "Yes": cout << "No"; 
    return 0; 
} 
