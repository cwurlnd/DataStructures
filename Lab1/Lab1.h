/*********
 * File: Lab1.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a function where a user inputs four variables
 * which are all read and then returned with a Call by Reference
 *********/

#ifndef LAB1
#define LAB1

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string
#define SSTREAM std::stringstream
#define CIN std::cin
#define CERR std::cerr

bool chars(STRING example) {
  for (unsigned int i = 0; i < example.length(); ++i) {
    if (example[i] < '0' || example[i] > '9') {
      if (example[i] == '-') {
        if (i != 0) {
          return false;
        }
      }
      else if (example[i] != '.') {
        return false;    
      }
    }
  }
  return true;
}

void nums(long unsigned int& l, float& f, double& d, char& c) {

  STRING strl;

  STRING strf;

  STRING strd;

  STRING strc;

  // Check the accuracy of an input of a long unsigned integer

  COUT << "Input a long unsigned integer: ";
  CIN >> strl;

  if(SSTREAM(strl) >> l && chars(strl) && strl.find(".") == STRING::npos) { 
    COUT << "The long unsigned integer is " << l << ENDL; 
  }
  else {
    CERR << strl << " is not a valid long unsigned integer" << ENDL;
    exit(-1);
  }

  // Check the accuracy of an input of a float
  
  COUT << "Input a float: ";
  CIN >> strf;

  if(SSTREAM(strf) >> f && chars(strf)) {
    COUT << "The float is " << f << ENDL;
  }
  else {
    CERR << strf << " is not a valid float" << ENDL;
    exit(-1);
  }

  // Check the accuracy of an input of a double
  
  COUT << "Input a double: ";
  CIN >> strd;

  if(SSTREAM(strd) >> d && chars(strd)) {
    COUT << "The double is " << d << ENDL;
  }
  else {
    CERR << strd << " is not a valid double" << ENDL;
    exit(-1);
  }

  // Check the accuracy of an input of a char
  
  COUT << "Input a char: ";
  CIN >> strc;

  if (SSTREAM(strc) >> c) {
    COUT << "The char is " << c << ENDL;
  }
  else {
    CERR << strc << " is not a valid char" << ENDL;
    exit(-1);
  }
}

#endif
