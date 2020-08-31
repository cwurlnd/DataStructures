/***************
 * File: Anagram.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function definitions
 * used to identify anagrams
 **************/

#ifndef LAB3
#define LAB3

#include <iostream> 
#include <string>
#include <unordered_map>

#define COUT std::cout
#define ENDL std::endl

void printHash(std::unordered_map<char, long unsigned int>& h) {
  for (auto const& pair: h) {
    COUT << "{" << pair.first << ": " << pair.second << "}\n";
  }
}

bool findAna(std::string s, std::string t) {

  // Check if the strings are the same length
  if (s.length() != t.length()) {
    return false;
  }

  std::unordered_map<char, long unsigned int> theHash;

  // Adding each char in the string to a hash table
  for (long unsigned int i = 0; i < s.length(); ++i) {
    theHash.insert({s[i], i});
  }

  for (long unsigned int i = 0; i < t.length(); ++i) {
    COUT << "i is " << i << ENDL;
    if (theHash.count(t[i]) != 0) {
      COUT << "Before: ";
      printHash(theHash);
      COUT << ENDL;
      theHash.erase(t[i]);
      COUT << "After: ";
      printHash(theHash);
      COUT << ENDL;
    }
    else {
      COUT << "yep" << ENDL;
      return false;
    }
  }

  return true;
}

#endif