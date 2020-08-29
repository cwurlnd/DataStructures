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
  int i = lo+1;
  int j = hi;
  while (true) {
    while (array[i] <= array[lo]) {
      if (i == hi) {
        break;
      }
      ++i;
    } 
    while (array[lo] <= array[j]) {
      if (j == lo) {
        break;
      }
      --j;
    }

    if (i >= j) {
      break;
    }
    T temp1 = array[i];
    array[i] = array[j];
    array[j] = temp1;
  }
  T temp2 = array[lo];
  array[lo] = array[j];
  array[j] = temp2;

  return j;
}
  
template <class T>
void sort (std::vector<T>& array, int lo, int hi) {
  if (hi <= lo) {
    return;
  }
  int j = partition(array, lo, hi);
  sort(array, lo, j-1);
  sort(array, j+1, hi);
}

template <class T>
void printArray(std::vector<T>& array) {
  for (int i = 0; i < array.size(); ++i) {
    COUT << array[i] << " ";
  }
}

#endif
