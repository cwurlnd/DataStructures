/******************
 * File: Fundamental.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests for the 
 * LinearProbe Hash and DoubleHash Hash
 *****************/

#include "../include/DoubleHash.h"
#include "../include/LinearProbe.h"

void test1 () {
 
  HashTable<int, std::string> firstHash;
  
  firstHash.insert( { 76, "First"} );
  firstHash.insert( { 40, "Second"} );
  firstHash.insert( { 48, "Third"} );

  COUT << "Linear Hash Results:" << ENDL;

  COUT << firstHash << ENDL;

  DoubleHash<int, std::string> firstDouble;
  
  firstDouble.insert( { 76, "First"} );
  firstDouble.insert( { 40, "Second"} );
  firstDouble.insert( { 48, "Third"} );

  COUT << "Double Hash Results:" << ENDL;

  COUT << firstDouble << ENDL;
}

int main () {
  test1();

  return 0;
}
