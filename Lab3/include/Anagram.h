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

bool findAna(std::string s, std::string t) {

  // Check if the strings are the same length
  if (s.length() != t.length()) {
    return false;
  }

  // Create a hash map with chars and frequency of that char
  std::unordered_map<char, long unsigned int> theHash;

  // Adding each char in the string to a hash table
  for (long unsigned int i = 0; i < s.length(); ++i) {
    // Check if char is already there, if so increment frequency
    if (theHash.count(s[i]) != 0) {
      theHash[s[i]] = theHash[s[i]] + 1;
      continue;
    }
    // Add char to hash map
    theHash.insert({s[i], 1});
  }

  for (long unsigned int i = 0; i < t.length(); ++i) {
    // Check if char is in hash map
    if (theHash.count(t[i]) != 0) {
      // Check if there is more than 1 instance of that char
      if (theHash[t[i]] > 1) { 
        theHash[s[i]] = theHash[s[i]] - 1;
      }
      // Erase char from hash map if it is the last instance
      else {
        theHash.erase(t[i]);
      }
    }
    else {
      // Return false if not in hash map
      return false;
    }
  }
  // Return true if all conditions are met
  return true;
}

#endif
