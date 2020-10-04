/*******************
 * File PQTest.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contins the tests for the
 * Priority Queue
 ******************/
#include "../include/SorDLList.h"
#include "../include/DLList.h"
#include "../include/Priority.h"
#include "../include/PriorityQueue.h"

#define COUT std::cout
#define ENDL std::endl

int main() {
  Priority<std::string> one ("Cheering", 5);
  Priority<std::string> two ("The", 3);
  Priority<std::string> three ("Name", 7);
  Priority<std::string> four ("Wake", 1);
  Priority<std::string> five ("Echoes", 4);
  Priority<std::string> six ("Her", 6);
  Priority<std::string> seven ("Up", 2);

  PriorityQueue<Priority<std::string>> theQueue;

  theQueue.push(one);
  theQueue.push(two);
  theQueue.push(three);
  theQueue.push(four);
  theQueue.push(five);
  theQueue.push(six);
  theQueue.push(seven);

  while (!theQueue.empty()) {
    COUT << theQueue.front() << ENDL;
    theQueue.pop();
  }

  COUT << "The queue is empty" << ENDL;

  return 0;
}
