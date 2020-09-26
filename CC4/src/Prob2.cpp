/*******************
 * File Prob2.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Trapping Rain Water problem
 ******************/

#include "../include/Rain.h"

int main() {
  int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };

  int n = (int)sizeof(arr) / (int)sizeof(arr[0]);

  COUT << maxWater(arr, n) << ENDL;

  return 0;
}
