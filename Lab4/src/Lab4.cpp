/***************
 * File: Lab4.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the test cases
 * for merging int intervals
 **************/

#include "../include/MergeInt.h"

void test1(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 1: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{1,3},{2,6},{8,10},{15,18}};
  
  COUT << "Input: " << ENDL;
  printVector(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

void test2(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 2: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{1,4},{4,5}};
  
  COUT << "Input: " << ENDL;
  printVector(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

int main() {
  test1();

  test2();

  return 0;
}
