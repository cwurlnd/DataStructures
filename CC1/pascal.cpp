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
      if (i == 1 || i == 2 || j == 0 || j == i) {
        triangle [i][j] = 1;
        continue;
      }
      triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
    } 
  }

  return triangle;
}

void printTriangle(int** triangle) {
  int numRows = ;
  COUT << numRows << ENDL;

  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j <= i; ++ j) {
      COUT << i << " <-- i " << j << "<--- j"; 
      COUT << triangle[i][j] << " ";
    } 
    COUT << ENDL;
  }
}


