/***************
 * File: Lab4.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the test cases
 * for merging int intervals
 **************/

#include "../include/MergeInt.h"

// First two tests given as examples
void test1(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 1: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{1,3},{2,6},{8,10},{15,18}};
  
  COUT << "Input: " << ENDL;
  printVecVec(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

void test2(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 2: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{1,4},{4,5}};
  
  COUT << "Input: " << ENDL;
  printVecVec(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

// Test of unsorted intervals
void test3(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 3: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{10,14},{1,3},{8,11},{2,6}};
  
  COUT << "Input: " << ENDL;
  printVecVec(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

// Another self-made test
void test4(){
  
  COUT << "-------------------------" << ENDL;
  COUT << "Test 4: " << ENDL;
  
  VECTOR< VECTOR<int> > v = {{1,3},{2,5},{7,8},{7,10}};
  
  COUT << "Input: " << ENDL;
  printVecVec(v);
  
  COUT << ENDL << "Solution: " << ENDL;
  printVecVec(merge(v)); 

}

int main() {
  test1();

  test2();

  test3();

  test4();

  return 0;
}
