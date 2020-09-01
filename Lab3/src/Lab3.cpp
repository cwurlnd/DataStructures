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

  // Test 1 - short and anagram
  COUT << "----------------------" << ENDL;
  // Declare each string
  std::string s = "anagram";
  std::string t = "nagaram";
  // Test for anagram
  bool result = findAna(s, t);
  COUT << "s = " << s << " t = " << t << ENDL;
  // Print result in a meaningful way
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }

  // Test 2 - short and not anagram
  COUT << "----------------------" << ENDL;
  s = "potato";
  t = "fridge";
  result = findAna(s, t);
  COUT << "s = " << s << " t = " << t << ENDL;
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }

  // Test 3 - long and anagram
  COUT << "----------------------" << ENDL;
  s = "autobiography";
  t = "riboouatgpyha";
  result = findAna(s, t);
  COUT << "s = " << s << " t = " << t << ENDL;
  if (result) {
    COUT << "Result: true" << ENDL;
  }
  else {
    COUT << "Result: false" << ENDL;
  }

  
  // Test 4 - long and not anagram
  COUT << "----------------------" << ENDL;
  s = "circumstantial";
  t = "weightlessness";
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
