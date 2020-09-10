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

  COUT << "---------TEST 1-------------" << ENDL;
 
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

  COUT << ENDL;
}

void test2 () 
{
  COUT << "---------TEST 2-------------" << ENDL;
 
  HashTable<int, std::string> firstHash;
  
  firstHash.insert( { 76, "First"} );
  firstHash.insert( { 40, "Second"} );
  firstHash.insert( { 48, "Third"} );
  firstHash.insert( { 5, "Fourth"} );
  firstHash.insert( { 55, "Fifth"} );

  COUT << "Linear Hash Results:" << ENDL;

  COUT << firstHash << ENDL;

  DoubleHash<int, std::string> firstDouble;
  
  firstDouble.insert( { 76, "First"} );
  firstDouble.insert( { 40, "Second"} );
  firstDouble.insert( { 48, "Third"} );
  firstDouble.insert( { 5, "Fourth"} );
  firstDouble.insert( { 55, "Fifth"} );

  COUT << "Double Hash Results:" << ENDL;

  COUT << firstDouble << ENDL;

  COUT << ENDL;
}

void test3 () {

  COUT << "---------TEST 3-------------" << ENDL;
 
  HashTable<int, std::string> firstHash;
  
  firstHash.insert( { 76, "First"} );
  firstHash.insert( { 40, "Second"} );
  firstHash.insert( { 48, "Third"} );
  firstHash.insert( { 5, "Fourth"} );
  firstHash.insert( { 55, "Fifth"} );
  firstHash.insert( { 10, "Sixth"} );
  firstHash.insert( { 18, "Seventh"} );

  COUT << "Linear Hash Results:" << ENDL;

  COUT << firstHash << ENDL;

  DoubleHash<int, std::string> firstDouble;
  
  firstDouble.insert( { 76, "First"} );
  firstDouble.insert( { 40, "Second"} );
  firstDouble.insert( { 48, "Third"} );
  firstDouble.insert( { 5, "Fourth"} );
  firstDouble.insert( { 55, "Fifth"} );
  firstDouble.insert( { 10, "Sixth"} );
  firstDouble.insert( { 18, "Seventh"} );

  COUT << "Double Hash Results:" << ENDL;

  COUT << firstDouble << ENDL;

  COUT << ENDL;
}

void test4 () {

  COUT << "---------TEST 4-------------" << ENDL;
 
  HashTable<int, std::string> firstHash;
  
  firstHash.insert( { 76, "First"} );
  firstHash.insert( { 40, "Second"} );
  firstHash.insert( { 48, "Third"} );
  firstHash.insert( { 5, "Fourth"} );
  firstHash.insert( { 55, "Fifth"} );
  firstHash.insert( { 10, "Sixth"} );
  firstHash.insert( { 18, "Seventh"} );
  firstHash.insert( { 44, "Eighth"} );
  firstHash.insert( { 64, "Ninth"} );

  COUT << "Linear Hash Results:" << ENDL;

  COUT << firstHash << ENDL;

  DoubleHash<int, std::string> firstDouble;
  
  firstDouble.insert( { 76, "First"} );
  firstDouble.insert( { 40, "Second"} );
  firstDouble.insert( { 48, "Third"} );
  firstDouble.insert( { 5, "Fourth"} );
  firstDouble.insert( { 55, "Fifth"} );
  firstDouble.insert( { 10, "Sixth"} );
  firstDouble.insert( { 18, "Seventh"} );
  firstDouble.insert( { 44, "Eighth"} );
  firstDouble.insert( { 64, "Ninth"} );

  COUT << "Double Hash Results:" << ENDL;

  COUT << firstDouble << ENDL;

  COUT << ENDL;
}

int main () {
  test1();

  test2();

  test3();

  test4();

  return 0;
}
