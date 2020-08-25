/****************
 * File: functions.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This files contains the function definitions
 * used to fin the longest increasing subsequence
 ***************/

#ifndef LAB2
#define LAB2

#include <iostream>
#include <vector>
#include <string>

#define COUT std::cout
#define ENDL std::endl

// I am using a sorting algorithm called patience sorting
// to help me find the LIS. Basically it takes the first
// member of the array and puts it in a pile. For each next
// member, it checks if it is smaller than a member who is 
// already in a pile. If so it adds to the pile. If not, it 
// makes a new pile. The amount of piles is the length of
// the LIS. A great video I watched about this can be seen
// here: https://www.youtube.com/watch?v=22s1xxRvy28
template <class T>
unsigned int findLong(const std::vector<T>& array) {
  // Check for empty array
  if (array.size() == 0) {
    return 0;
  }

  // Create a new array to store piles in
  std::vector<T> temp;
  for (unsigned int i = 0; i < array.size(); ++i) {
    // Create first pile
    if (i == 0) {
      temp.push_back(array[i]);
      continue;
    }
    for (unsigned int j = 0; j < temp.size(); ++j) {
      // Check if new member is less than existing pile
      if (array[i] <= temp[j]) {
        // Update the smallest number on pile to the new member
        temp[j] = array[i];
        break;
      }
      // If it is not smaller, make a new pile
      else if (j == temp.size() - 1) {
          temp.push_back(array[i]);
      }
    }
  }

  // Return the number of piles
  unsigned int size = (unsigned int)temp.size();
  return size;
}

// Prints the array
template <class T>
void printArray(const std::vector<T>& array) {
  // Check for empty array
  if (array.size() == 0) {
    return;
  }

  // Loop and print each array element
  for (unsigned int i = 0; i < array.size(); ++i) {
    COUT << array[i] << " ";
  }
}

#endif
