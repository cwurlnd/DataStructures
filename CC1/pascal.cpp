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
      if (i == 0 || i == 1 || j == 0 || j == i) {
        triangle [i][j] = 1;
        continue;
      }
      triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
    } 
  }

  return triangle;
}

void printTriangle(int** triangle, int numRows) {
  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j <= i; ++ j) {
      COUT << triangle[i][j] << " ";
    } 
    COUT << ENDL;
  }
  COUT << ENDL;
}

int getElement(int** triangle, int row, int col, int numRows) {
  if ((row-1) >> numRows) {
    return -1;
  } 
  if (col > row) {
    return -2;
  }
  return triangle[row-1][col-1];
}

void doWork() {
  int numRows;
  int row, col;
  int element;
  char cont;

  COUT << "How many levels do you want to calculate? "; 
  CIN >> numRows;
  COUT << ENDL;

  if(numRows < 1) {
    CERR << "Not a valid number of rows." << ENDL;
    exit(-1);
  }

  int** myTriangle = makeTriangle(numRows);
  printTriangle(myTriangle, numRows);

  while(true) {
    COUT << "Enter a row and a column value to print [two numbers only]: ";
    CIN >> row >> col;
    
    element = getElement(myTriangle, row, col, numRows);
    if (element == -1) {
      COUT << row << " is not a valid row." << ENDL;  
    }
    else if (element == -2) {
      COUT << col << " is not a valid column in row " << row << ENDL;
    }
    else {
      COUT << element << ENDL;
    }

    COUT << "Continue? [y/n]: ";
    CIN >> cont;

    COUT << cont << ENDL;

    if (cont != 'y' || cont != 'Y') {
      break;
    }
  }

  COUT << ENDL << "Exiting the program..." << ENDL;
}
