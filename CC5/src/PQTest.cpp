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

void test1() {
  // Create Priority instances
  Priority<std::string> one ("Cheering", 5);
  Priority<std::string> two ("The", 3);
  Priority<std::string> three ("Name", 7);
  Priority<std::string> four ("Wake", 1);
  Priority<std::string> five ("Echoes", 4);
  Priority<std::string> six ("Her", 6);
  Priority<std::string> seven ("Up", 2);

  // Create priority queue
  PriorityQueue<Priority<std::string>> theQueue;

  // Push to queue
  theQueue.push(one);
  theQueue.push(two);
  theQueue.push(three);
  theQueue.push(four);
  theQueue.push(five);
  theQueue.push(six);
  theQueue.push(seven);

  // Print and pop queue
  while (!theQueue.empty()) {
    COUT << theQueue.front() << ENDL;
    theQueue.pop();
  }

  COUT << "The queue is empty" << ENDL;
}

void test2() {
  // Create Priority instances
  Priority<char> one ('y', 5);
  Priority<char> two (' ', 6);
  Priority<char> three ('u', 8);
  Priority<char> four ('e', 4);
  Priority<char> five ('C', 1);
  Priority<char> six ('W', 7);
  Priority<char> seven ('l', 10);
  Priority<char> eight ('o', 2);
  Priority<char> nine ('r', 9);
  Priority<char> ten ('r', 3);

  // Create priority queue
  PriorityQueue<Priority<char>> theQueue;

  // Push to queue
  theQueue.push(one);
  theQueue.push(two);
  theQueue.push(three);
  theQueue.push(four);
  theQueue.push(five);
  theQueue.push(six);
  theQueue.push(seven);
  theQueue.push(eight);
  theQueue.push(nine);
  theQueue.push(ten);

  // Print and pop queue
  while (!theQueue.empty()) {
    COUT << theQueue.front() << ENDL;
    theQueue.pop();
  }

  COUT << "The queue is empty" << ENDL;
}

int main() {
  // Run test 1
  test1();

  // Run test 2
  test2();

  return 0;
}
