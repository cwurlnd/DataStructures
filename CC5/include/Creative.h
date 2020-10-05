/***************
* File: Creative.h
* Author: Corey Wurl
* NDID: 902091236
*
* This file contains the function definitions
* for the Priority Queue creative application
***************/

#ifndef CC5_CREATIVE
#define CC5_CREATIVE

#include "Priority.h"
#include "SorDLList.h"
#include "PriorityQueue.h"
#include <string>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

void dmv() {
  char input;
  std::string name;
  int value;
  PriorityQueue<Priority<std::string>> theQueue;

  // Enter the organizer
  COUT << "Welcome to the DMV Organizer! Press s to start!" << ENDL;
  std::cin >> input;
  // Check for valid input
  if (input != 's' && input != 'S') {
    COUT << "Not today? Come back again to try the DMV Organizer!" << ENDL;
    return;
  }

  while (true) {
    // Provide user with options
    COUT << "Choose an option: " << ENDL;
    COUT << "----------------------------------------" << ENDL;
    COUT << "Add a customer [a]" << ENDL;
    COUT << "Print number of customers waiting [w]" << ENDL;
    COUT << "Print next customer in line [n]" << ENDL;
    COUT << "Print customer at end of line [e]" << ENDL;
    COUT << "Help the next customer [h]" << ENDL;
    COUT << "Quit [q]" << ENDL;
    COUT << "----------------------------------------" << ENDL;
    std::cin >> input;

    // Add customer name with value
    if (input == 'a') {
      COUT << "Please enter the name of the customer: " << ENDL;
      std::cin >> name;
      COUT << "Please enter the priority of the customer: " << ENDL;
      std::cin >> value;
      Priority<std::string> temp (name, value);
      theQueue.push(temp);
    }
    // Print customers in line if there are customers
    else if (input =='w') {
      COUT << "There are currently " << theQueue.size() << " customers waiting in line." << ENDL;
    }
    // Print next customer in line if there are customers
    else if (input == 'n') {
      if (theQueue.empty()) {
        COUT << "There are no customers in line at the moment" << ENDL;
        continue;
      }
      COUT << "The customer next in line: " <<theQueue.front() << ENDL;
    }
    // Print last customer in line if there are customers
    else if (input == 'e') {
      if (theQueue.empty()) {
        COUT << "There are no customers in line at the moment" << ENDL;
        continue;
      }
      COUT << "The customer at the end of the line: " << theQueue.back() << ENDL;
    }
    // Print customer name and remove them from the queue
    else if (input == 'h') {
      if (theQueue.empty()) {
        COUT << "There are no customers in line at the moment" << ENDL;
        continue;
      }
      COUT << "Please help this customer now: " << theQueue.front() << ENDL;
      theQueue.pop();
    }
    // Quit the application
    else if (input == 'q') {
      COUT << "Thank you for using the DMV Organizer!" << ENDL;
      return;
    }
    // Check for invalid input
    else {
      COUT << "Please enter a valid input." << ENDL;
      continue;
    }
    COUT << ENDL;
  }
}

#endif
