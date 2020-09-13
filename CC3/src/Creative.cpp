/**************
 * File: Creative.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests for
 * the test grader application
 ************/

#include "../include/Creative.h"

int main() {
  COUT << "----------TEST 1------------" << ENDL;
  COUT << "Add 3 student grades, modify scores, delete and print them" << ENDL << ENDL;
  grader();

  COUT << "----------TEST 2------------" << ENDL;
  COUT << "Add 5 student grades, modify scores, delete and print them" << ENDL << ENDL;
  grader();

  COUT << "----------TEST 3------------" << ENDL;
  COUT << "Add 7 student grades, modify scores, delete and print them" << ENDL << ENDL;
  grader();

  COUT << "----------TEST 4------------" << ENDL;
  COUT << "Add 9 student grades, modify scores, delete and print them" << ENDL << ENDL;
  grader();

  return 0;
}
