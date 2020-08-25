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
  // Test 1
  COUT << "-------------------------------" << ENDL;
  std::vector<int> ex1{10, 9, 2, 5, 3, 7, 101, 18};
  COUT << "First Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex1);
  COUT << ENDL;
  unsigned int result = findLong(ex1);
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
  std::vector<std::string> ex4{"Data", "Structures", "is", "the", "best", "class"};
  COUT << "Fourth Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex4);
  COUT << ENDL;
  result = findLong(ex4);
  COUT << "Result: " << result << ENDL;

  // Test 5
  COUT << "-------------------------------" << ENDL;
  std::vector<int> ex5{20, 12, 34, 36, 1, 0, 16, 42, 13, 14, 29, 18, 22, 37, 7, 25};
  COUT << "Fifth Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex5);
  COUT << ENDL;
  result = findLong(ex5);
  COUT << "Result: " << result << ENDL;

  // Test 6
  COUT << "-------------------------------" << ENDL;
  std::vector<char> ex6{'Q', 'u', 'i', 'c', 'k', 'b', 'r', 'o', 'w', 'n', 'f', 'o', 'x'};
  COUT << "Sixth Test:" << ENDL;
  COUT << "Array to test for LIS\t : ";
  printArray(ex6);
  COUT << ENDL;
  result = findLong(ex6);
  COUT << "Result: " << result << ENDL;

  return 0;
}
