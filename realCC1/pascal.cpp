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
    // Allocate each row
    triangle[i] = (int *)malloc(sizeof(int) * (i+1));
    for (int j = 0; j <= i; ++ j) {
      // Fill in values for each number
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
  // Loop through triangle
  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j <= i; ++ j) {
      // Print each value with space
      COUT << triangle[i][j] << " ";
    } 
    COUT << ENDL;
  }
  COUT << ENDL;
}

int getElement(int** triangle, int row, int col, int numRows) {
  // Check if input is valid and return element if so
  if ((row) > numRows) {
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

  // Check for valid number of rows
  if(numRows < 1) {
    CERR << "Not a valid number of rows." << ENDL;
    exit(-1);
  }

  // Create the triangle and print it
  int** myTriangle = makeTriangle(numRows);
  printTriangle(myTriangle, numRows);

  // Ask user for a row and column to print until they want to exit
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

    // Check if user wants to continue
    COUT << "Continue? [y/n]: ";
    CIN >> cont;
    COUT << ENDL;

    if (cont != 'y' && cont != 'Y') {
      break;
    }
  }
  
  // Free the allocated memory
  for (int i = 0; i < numRows; ++i) {
    free(myTriangle[i]);
  }

  free(myTriangle);

  COUT << "Exiting the program..." << ENDL;
}
