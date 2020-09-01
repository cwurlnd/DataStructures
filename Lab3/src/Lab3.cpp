/*****************
 * File: Lab3.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests for
 * comparing anagram strings
 ****************/

#include "../include/Anagram.h"

int main() {

  // Test 1
  COUT << "----------------------" << ENDL;
  std::string s = "anagram";
  std::string t = "nagaram";
  bool result = findAna(s, t);
  COUT << "s = " << s << " t = " << t << ENDL;
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }

  // Test 2
  COUT << "----------------------" << ENDL;
  s = "rat";
  t = "car";
  result = findAna(s, t);
  COUT << "s = " << s << " t = " << t << ENDL;
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }

  return 0;
}
