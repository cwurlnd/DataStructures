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

void grader() {
  std::string name;
  int grade;
  char input;
  DoubleHash<std::string, int> table;

  while (true) {
    COUT << "What would you like to do?" << ENDL;
    COUT << "Enter a grade (e) / Change a grade (c) / Remove a grade (r) / Print grades (p) / Quit (q): "
    CIN >> char;
    COUT << ENDL;

    if (input == 'e') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      COUT << "Please enter the grade the student received on the test (0-100): ";
      CIN >> grade;
      COUT << ENDL;

      table.insert( { name, grade } ); 
    
      COUT << "You have entered a grade of " << grade << " for " << name << ENDL;
    }

    else if (input == 'c') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      if (!table.contains(name)) {
        COUT << "A grade does not exist for this student" << ENDL;
        continue;
      }

      COUT << "Please enter the new grade: ";
      CIN >> grade;
      COUT << ENDL;

      int temp = table[name]
      table[name] = grade;

      COUT << "The grade for " << name << " has been changed from " << temp << " to " << grade << ENDL;
    }

    else if (input == 'r') {
      COUT << "Please enter a student name: ";
      CIN >> name;
      COUT << ENDL;

      if (!table.contains(name)) {
        COUT << "A grade does not exist for this student" << ENDL;
        continue;
      }

      table.remove(name);

      COUT << "The grade of " << grade << " for " << name << " has been removed" << ENDL;      
    }

    else if (input == 'p') {
      COUT << table << ENDL; 
    }

    else if (input == 'q') {
      break;
    }

    else {
      COUT << "Please enter a valid character" << ENDL;
    }

  }
}
