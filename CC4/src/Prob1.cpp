/*******************
 * File Prob1.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Pacific Atlantic problem
 ******************/

#include "../include/Pacific.h"

void test1 () {
  COUT << "------------TEST 1--------------" << ENDL;

  VECTOR<VECTOR<int>> matrix { { 1, 3, 4, 3, 7 }, 
                               { 2, 2, 3, 4, 4 }, 
                               { 2, 4, 5, 3, 1 },
                               { 6, 7, 5, 4, 5 },
                               { 5, 1, 6, 2, 4 } };

  for (int i = 0; i < (int)matrix.size(); i++) { 
    for (int j = 0; j < (int)matrix[i].size(); j++) 
      COUT << matrix[i][j] << " "; 
    COUT << ENDL; 
  } 

  COUT << ENDL << ENDL;

  VECTOR<VECTOR<int>> res = pacificAtlantic(matrix);

  for (int i = 0; i < (int)res.size(); i++) { 
    for (int j = 0; j < (int)res[i].size(); j++) 
      COUT << res[i][j] << " "; 
    COUT << ENDL; 
  } 
  COUT << ENDL;
}

void test2 () {
  COUT << "------------TEST 2--------------" << ENDL;

  VECTOR<VECTOR<int>> matrix { { 1, 2, 2, 3, 5 }, 
                               { 3, 2, 3, 4, 4 }, 
                               { 2, 4, 5, 3, 1 },
                               { 6, 7, 1, 4, 5 },
                               { 5, 1, 1, 2, 4 } };

  for (int i = 0; i < (int)matrix.size(); i++) { 
    for (int j = 0; j < (int)matrix[i].size(); j++) 
      COUT << matrix[i][j] << " "; 
    COUT << ENDL; 
  } 

  COUT << ENDL << ENDL;

  VECTOR<VECTOR<int>> res = pacificAtlantic(matrix);

  for (int i = 0; i < (int)res.size(); i++) { 
    for (int j = 0; j < (int)res[i].size(); j++) 
      COUT << res[i][j] << " "; 
    COUT << ENDL; 
  } 
  COUT << ENDL;
}

void test3 () {
  COUT << "------------TEST 3--------------" << ENDL;

  VECTOR<VECTOR<int>> matrix { { 1, 2, 2, 3, 5 }, 
                               { 4, 4, 1, 4, 1 }, 
                               { 2, 1, 5, 2, 2 },
                               { 6, 1, 6, 6, 6 },
                               { 7, 1, 7, 5, 4 } };

  for (int i = 0; i < (int)matrix.size(); i++) { 
    for (int j = 0; j < (int)matrix[i].size(); j++) 
      COUT << matrix[i][j] << " "; 
    COUT << ENDL; 
  } 

  COUT << ENDL << ENDL;

  VECTOR<VECTOR<int>> res = pacificAtlantic(matrix);

  for (int i = 0; i < (int)res.size(); i++) { 
    for (int j = 0; j < (int)res[i].size(); j++) 
      COUT << res[i][j] << " "; 
    COUT << ENDL; 
  } 
  COUT << ENDL;
}

int main() {
  test1();

  test2();

  test3();

  return 0;
}
