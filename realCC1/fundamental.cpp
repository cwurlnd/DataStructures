/**************
 * File: fundamentals.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the the tests for 
 * my Pascal application
 *************/

#include "pascal.h"

int main() {
  COUT << "For purposes of tests other than the four previously designed, experiment with Pascal's triangle here: " << ENDL;
  // Use doWork() to create any desired triangle
  doWork();

  // Ask if user wants to see the example tests
  COUT << "Would you like to see the four tests? [y/n] ";
  char input;
  CIN >> input; 
  if (input != 'y' && input != 'Y') {
    return 0;
  } 
  
  // Example tests for two valid and invalid inputs
  COUT << "------TEST 1------" << ENDL;
  COUT << "Correct inputs, create a triangle of 5 rows, access position 3 1 and exit" << ENDL;
  doWork();
  COUT << ENDL;

  COUT << "------TEST 2------" << ENDL;
  COUT << "Correct inputs, create a triangle of 10 rows, access position 9 3 and exit" << ENDL;
  doWork();
  COUT << ENDL;

  COUT << "------TEST 3------" << ENDL;
  COUT << "Incorrect inputs, create a triangle of 5 rows, access position 7 1 and exit" << ENDL;
  doWork();
  COUT << ENDL;

  COUT << "------TEST 4------" << ENDL;
  COUT << "Incorrect inputs, create a triangle of 10 rows, access position 9 13 and exit" << ENDL;
  doWork();
  COUT << ENDL;

  return 0;
}

