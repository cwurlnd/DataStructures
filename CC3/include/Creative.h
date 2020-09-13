/**************
 * File: Creative.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function declarations
 * for the test grader application
 *************/

#ifndef TESTGRADER
#define TESTGRADER

#include "DoubleHash.h"

#define CIN std::cin

void grader() {
  std::string name;
  int grade;
  char input;
  DoubleHash<std::string, int> table;

  // Coninue to ask the user what they want to do until they want to stop
  while (true) {
    COUT << "What would you like to do?" << ENDL;
    COUT << "Enter a grade (e) / Change a grade (c) / Remove a grade (r) / Print grades (p) / Quit (q): ";
    // Get user input on what they want to do
    CIN >> input;
    COUT << ENDL;

    // Enter a grade
    if (input == 'e') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      COUT << "Please enter the grade the student received on the test (0-100): ";
      CIN >> grade;
      COUT << ENDL;

      // Insert into the hash table the specified data
      table.insert( { name, grade } ); 
    
      COUT << "You have entered a grade of " << grade << " for " << name << ENDL;
    }
    // Change a grade
    else if (input == 'c') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      // Check if that entry exists in the hash table
      if (!table.contains(name)) {
        COUT << "A grade does not exist for this student" << ENDL;
        continue;
      }

      COUT << "Please enter the new grade: ";
      CIN >> grade;
      COUT << ENDL;

      // Store old value for printing purposes
      int temp = table[name];
      // Change the value of grade
      table[name] = grade;

      COUT << "The grade for " << name << " has been changed from " << temp << " to " << grade << ENDL;
    }
    // Remove a grade
    else if (input == 'r') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      // Check if that entry exists in the hash table
      if (!table.contains(name)) {
        COUT << "A grade does not exist for this student" << ENDL;
        continue;
      }

      // Store olf value for printing purposes
      int temp2 = table[name];
      // Remove the value from the table
      table.remove(name);

      COUT << "The grade of " << temp2 << " for " << name << " has been removed" << ENDL;      
    }
    // Print the grade
    else if (input == 'p') {
      // Print the hash table using the overloaded operator
      COUT << table << ENDL; 
    }
    // Quit out of the function/while loop
    else if (input == 'q') {
      break;
    }
    // Prints if the user does not enter one of the specified chars
    else {
      COUT << "Please enter a valid character" << ENDL;
    }

  }
}

#endif
