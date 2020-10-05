/*******************
 * File SorDLLTest.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Sorted Doubly Linked List
 ******************/

#include "../include/SorDLList.h"
#include "../include/DLList.h"

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin

int main () {
  int input;
  SorDLList<int> theList;

  COUT << "Please enter 10 integers, seperated by new line" << ENDL;

  // Get input from user and add to list
  for (int i = 0; i < 10; ++i) {
    CIN >> input;
    theList.Insert(input);
    COUT << theList << ENDL;
  }

  // Delete integers from list until empty
  while (!theList.IsEmpty()) {
    COUT << "Choose an integer to delete from the list" << ENDL;
    CIN >> input;

    // Check for valid integer
    if (!theList.contains(input)) {
      COUT << "Please enter a valid integer in the list" << ENDL;
      continue;
    }
    else {
      theList.Delete(input);
      COUT << theList << ENDL;
    }
  }

  COUT << "You have deleted the entire list" << ENDL;
}
