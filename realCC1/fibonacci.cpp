/***************
 * File: fibonacci.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function declarations
 * for my Fibonacci application
 **************/

#include "fibonacci.h"
#include "pascal.h"

void fibonacci(int numRows) {
  // Create variables that store consecutive numbers
  int curr1 = 1;
  int curr2 = 1;
  int next;

  // Loop through the number of elements and create sequence by adding two
  // prior numbers
  for (int i = 0; i < numRows; ++i) {
    if (i == 0 || i == 1) {
      COUT << "1 ";
      continue;
    }
    next = curr1 + curr2;
    curr1 = curr2;
    curr2 = next;

    COUT << next << " ";
  }
  COUT << ENDL;
}

