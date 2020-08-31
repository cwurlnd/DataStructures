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
  std::string s = "anagram";
  std::string t = "nagaram";
  bool result = findAna(s, t);
  COUT << "s = " << s << "\tt = " << t << ENDL;
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }
}
