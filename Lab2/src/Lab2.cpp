/****************
 * File: Lab2.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 * 
 * This file contains the tests for 
 * the longest increasing subsequence
 ***************/

#include "../include/functions.h"

int main () {
  std::vector<int> ex1{10, 5, 8, 3, 9, 4, 12, 11};
  COUT << "First Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex1);
  COUT << ENDL;
  unsigned int result = findLong(ex1);
  COUT << "Result: " << result << ENDL;

  return 0;
}
