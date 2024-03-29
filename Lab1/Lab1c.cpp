/*********
 * File: Lab1c.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a class that is used to print out the
 * specific addresses and values of each variable
 ********/

#include "Lab1.h"


// Creating the Node class
class Node { 
    private:
      long unsigned int theLong;
      float theFloat;
      double theDbl;
      char theChar;

    public:
      Node(long unsigned int longIn, float floatIn, double dblIn, char charIn) 
        : theLong( longIn ), theFloat( floatIn ), theDbl( dblIn ), theChar( charIn ) {}

      // Getters
      long unsigned int getLong() const {
        return theLong;
      }

      float getFloat() const {
        return theFloat;
      }

      double getDouble() const {
        return theDbl;
      }

      char getChar() const {
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

      // Friend operator

      friend std::ostream& operator<<(std::ostream& output, const Node& n) {
        output << "Initial address of 'this': " << &n << "\n" << "\n" << "Long Unsigned Int:  " << n.theLong << "\t at address " << &(n.theLong) << "\n" << "Double:  " << n.theDbl << "\t at address " << &(n.theDbl) << "\n" << "Float:  " << n.theFloat << "\t at address " << &(n.theFloat) << "\n" << "Char:  " << n.theChar << "\t at address " << (void *)&(n.theChar);

        return output;
      }
};

int main () {
  long unsigned int l;
  float f;
  double d;
  char c;

  nums(l, f, d, c);

  Node node1(l, f, d, c);

  COUT << node1 << ENDL;
}
