/*********
 * File: Lab1b.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a struct that is used to print out the 
 * specific addresses and values of each variable
 ********/

#include "Lab1.h"

struct Node{
    
    // Struct Members
    long unsigned int theLong;
    float theFloat;
    double theDbl;
    char theChar
          
    // Constructor
    Node(long unsigned int longIn, float floatIn, double dblIn, char charIn) 
      : theLong( longIn ), theFloat( floatIn ), theDbl( dblIn ), theChar( charIn ) {}
              
    // Struct methods
    void printVals() {
      COUT << "Initial address of 'this': " << this << ENDL << ENDL;  
      COUT << "Double:  " << this->theDbl << "\t at address " << &(this->theDbl) << ENDL;
      COUT << "Float:  " << this->theFloat << "\t at address " << &(this->theFloat) << ENDL;
      COUT << "Integer:  " << this->theInt << "\t at address " << &(this->theInt) << ENDL;
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
  Node node1(insert here);

  node1.printVals();

  return 0;
}
