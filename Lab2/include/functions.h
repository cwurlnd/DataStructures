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

template <class T>
unsigned int findLong(const std::vector<T>& array) {
  if (array.size() == 0) {
    return 0;
  }

  std::vector<T> temp;
  for (unsigned int i = 0; i < array.size(); ++i) {
    if (i == 0) {
      temp.push_back(array[i]);
      continue;
    }
    for (unsigned int j = 0; j < temp.size(); ++j) {
      if (array[i] <= temp[j]) {
        temp[j] = array[i];
        break;
      }
      else if (j == temp.size() - 1) {
          temp.push_back(array[i]);
      }
    }
  }

  unsigned int size = (unsigned int)temp.size();
  return size;
}

template <class T>
void printArray(const std::vector<T>& array) {
  if (array.size() == 0) {
    return;
  }

  for (unsigned int i = 0; i < array.size(); ++i) {
    COUT << array[i] << " ";
  }
}

#endif
