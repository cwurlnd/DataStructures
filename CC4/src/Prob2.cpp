/*******************
 * File Prob2.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Trapping Rain Water problem
 ******************/

#include "../include/Rain.h"

void test1() {
  COUT << "-------------TEST 1---------------" << ENDL;

  int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };

  int n = (int)sizeof(arr) / (int)sizeof(arr[0]);

  for (int i = 0; i < n; ++i) {
    COUT << arr[i] << " ";
  }
  COUT << ENDL << ENDL;

  COUT << "Water amount: " << maxWater(arr, n) << ENDL << ENDL;
}

void test2() {
  COUT << "-------------TEST 2---------------" << ENDL;

  int arr[] = { 3, 0, 2, 0, 4 };

  int n = (int)sizeof(arr) / (int)sizeof(arr[0]);

  for (int i = 0; i < n; ++i) {
    COUT << arr[i] << " ";
  }
  COUT << ENDL << ENDL;

  COUT << "Water amount: " << maxWater(arr, n) << ENDL << ENDL;
}


void test3() {
  COUT << "-------------TEST 3---------------" << ENDL;

  int arr[] = { 5, 0, 3, 1, 1, 2, 4, 0, 3, 2, 1, 3 };

  int n = (int)sizeof(arr) / (int)sizeof(arr[0]);

  for (int i = 0; i < n; ++i) {
    COUT << arr[i] << " ";
  }
  COUT << ENDL << ENDL;

  COUT << "Water amount: " << maxWater(arr, n) << ENDL << ENDL;
}

int main() {
  test1();

  test2();

  test3();

  return 0;
}
