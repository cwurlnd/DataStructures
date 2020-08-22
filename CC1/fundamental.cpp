/**************
 * File: fundamentals.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the the tests for 
 * my Pascal application
 *************/

#include "pascal.h"

int main() {
  int** tri1 = makeTriangle(5);
  printTriangle(tri1, 5);

  return 0;
}

