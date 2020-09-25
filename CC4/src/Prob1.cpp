/*******************
 * File Prob1.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Pacific Atlantic problem
 ******************/

#include "../include/Pacific.h"

int main() {
  VECTOR<VECTOR<int>> matrix { { 1, 2, 2, 3, 5 }, 
                               { 3, 2, 3, 4, 4 }, 
                               { 2, 4, 5, 3, 1 },
                               { 6, 7, 1, 4, 5 },
                               { 5, 1, 1, 2, 4 } };

  VECTOR<VECTOR<int>> res = pacificAtlantic(matrix);

  for (int i = 0; i < (int)res.size(); i++) { 
    for (int j = 0; j < (int)res[i].size(); j++) 
      COUT << res[i][j] << " "; 
    COUT << ENDL; 
  } 

  return 0;
}
