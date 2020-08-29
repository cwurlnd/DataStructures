/***************
 * File: quick.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function declarations for
 * The Quick Sort application
 **************/

#ifndef CC2
#define CC2

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#define COUT std::cout 
#define ENDL std::endl

template <class T>
int partition (std::vector<T>& array, int lo, int hi) {
  // Define the i and j pointers
  int i = lo+1;
  int j = hi;
  // Loop through the array
  while (true) {
    // Check if the i pointer is less than the reference
    while (array[i] <= array[lo]) {
      if (i == hi) {
        break;
      }
      // Move right
      ++i;
    } 
    // Check if the j pointer is greater than the reference
    while (array[lo] <= array[j]) {
      if (j == lo) {
        break;
      }
      // Move left
      --j;
    }

    // Check to see if pointers cross or are equal
    if (i >= j) {
      break;
    }

    // Swap i and j pointers
    T temp1 = array[i];
    array[i] = array[j];
    array[j] = temp1;
  }

  // Swap j and reference pointers
  T temp2 = array[lo];
  array[lo] = array[j];
  array[j] = temp2;

  return j;
}
  
template <class T>
void sort (std::vector<T>& array, int lo, int hi) {
  // Check if array size is 1
  if (hi <= lo) {
    return;
  }

  // Call the function recursively to properly implement quick sort
  int j = partition(array, lo, hi);
  sort(array, lo, j-1);
  sort(array, j+1, hi);
}

// Print the arrays
template <class T>
void printArray(std::vector<T>& array) {
  for (int i = 0; i < array.size(); ++i) {
    COUT << array[i] << " ";
  }
}

#endif
