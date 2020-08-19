/*********
 * File: Lab1b.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a struct that is used to print out the 
 * specific addresses and values of each variable
 ********/

#include "Lab1.h"


// Creating the Node struct
struct Node{
    
    // Struct Members
    long unsigned int theLong;
    float theFloat;
    double theDbl;
    char theChar;
          
    // Constructor
    Node(long unsigned int longIn, float floatIn, double dblIn, char charIn) 
      : theLong( longIn ), theFloat( floatIn ), theDbl( dblIn ), theChar( charIn ) {}
              
    // Struct methods
    void printVals() {
      COUT << ENDL << "Initial address of 'this': " << this << ENDL << ENDL;  
      COUT << "Long Unsigned Int:  " << this->theLong << " at address " << &(this->theLong) << ENDL;
      COUT << "Float:  " << this->theFloat << " at address " << &(this->theFloat) << ENDL;
      COUT << "Double:  " << this->theDbl << " at address " << &(this->theDbl) << ENDL;
      COUT << "Char:  " << this->theChar << " at address " << (void *)&(this->theChar) << ENDL;
    }

    // Getters

    long unsigned int getLong() {
      return theLong;
    }

    float getFloat() {
      return theFloat;
    }

    double getDouble() {
      return theDbl;
    }

    char getChar() {
      return theChar;
    }

    // Setters
    
    void setLong(long unsigned int& l) {
      theLong = l;
    }

    void setFloat(float& f) {
      theFloat = f;
    }

    void setDouble(double& d) {
      theDbl = d;
    }

    void setChar(char& c) {
      theChar = c;
    }
              
};

int main() {
  long unsigned int l;
  float f;
  double d;
  char c;

  nums(l, f, d, c);

  Node node1(l, f, d, c);

  node1.printVals();

  return 0;
}
