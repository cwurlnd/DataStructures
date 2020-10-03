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

int main () {
  //std::cout << "yesme" << std::endl;

  SorDLList<int> strDLL;

  std::cout << "yes" << std::endl;

	strDLL.Insert(1);
  strDLL.Insert(3);
  strDLL.Insert(2);

	std::cout << strDLL << std::endl;
}
