// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// To print the elements in the array.
void traverse(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  
}

// An optimized version of Bubble Sort.
void bubbleSort(int arr[], int n) {

  bool swapped;

  for (int i = 0; i < n - 1; i++) {

    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }

    }

    // If no two elements were swapped by the inner loop, then break.
    if (swapped == false)
      break;
  }
}

int main() {

  // Initializing an array to sort.
  int arr[5] = {36, 2, 45, 25, 18}; 

  // Length of the array.
  int n = sizeof(arr) / sizeof(arr[0]);

  // Printing the unsorted array.
  cout << "Unsorted Array - \n";
  traverse(arr, n);

  // Calling the sorting function.
  bubbleSort(arr, n);

  // Printing array after sorting.
  cout << "\nSorted Array - \n";
  traverse(arr, n);

  return 0;
}
