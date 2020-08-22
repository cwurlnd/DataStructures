/***************
 * File: pascal.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function declarations for 
 * my Pascal application
 **************/

#include "pascal.h"

int** makeTriangle(int rows) {
  int** triangle = (int**)(malloc(rows * sizeof(int *)));

  // Creating the triangle

  for (int i = 0; i < rows; ++i) {
    triangle[i] = (int *)malloc(sizeof(int) * (i+1));
    for (int j = 0; j <= i; ++ j) {
      triangle[i][j] = 0;
    } 
    COUT << ENDL;
  }

  return triangle;
}




