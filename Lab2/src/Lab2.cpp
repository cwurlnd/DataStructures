/****************
 * File: Lab2.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 * 
 * This file contains the tests for 
 * the longest increasing subsequence
 ***************/

#include "../include/functions.h"

int main () {
  // Empty Test
  COUT << "-------------------------------" << ENDL;
  std::vector<int> empty;
  COUT << "Empty Array Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(empty);
  COUT << ENDL;
  unsigned int result = findLong(empty);
  COUT << "Result: " << result << ENDL;

  // Test 1
  COUT << "-------------------------------" << ENDL;
  std::vector<int> ex1{10, 9, 2, 5, 3, 7, 101, 18};
  COUT << "First Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex1);
  COUT << ENDL;
  result = findLong(ex1);
  COUT << "Result: " << result << ENDL;

  // Test 2
  COUT << "-------------------------------" << ENDL;
  std::vector<int> ex2{10, 5, 8, 3, 9, 4, 12, 11};
  COUT << "Second Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex2);
  COUT << ENDL;
  result = findLong(ex2);
  COUT << "Result: " << result << ENDL;

  // Test 3
  COUT << "-------------------------------" << ENDL;
  std::vector<char> ex3{'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
  COUT << "Third Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex3);
  COUT << ENDL;
  result = findLong(ex3);
  COUT << "Result: " << result << ENDL;

  // Test 4
  COUT << "-------------------------------" << ENDL;
  std::vector<std::string> ex4{"Cheer,", "cheer", "for", "ol'", "Notre", "Dame"};
  COUT << "Fourth Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex4);
  COUT << ENDL;
  result = findLong(ex4);
  COUT << "Result: " << result << ENDL;

  // Test 5
  COUT << "-------------------------------" << ENDL;
  std::vector<int> ex5{38, 26, 38, 41, 12, 7, 22, 19, 35, 37, 48, 7, 29, 11, 47, 30, 35, 22, 27, 24, 47, 34, 36, 0, 14};
  COUT << "Fifth Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex5);
  COUT << ENDL;
  result = findLong(ex5);
  COUT << "Result: " << result << ENDL;

  return 0;
}
