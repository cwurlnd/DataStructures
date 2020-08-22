/****************
 * File: fibTest.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests comparing
 * Pascal to Fibonacci
 ****************/

#include "fibonacci.h"

int main() {
  COUT << "------TEST 1------" << ENDL;
  COUT << "Create a triangle of 6 rows" << ENDL;
  doWork();
  COUT << "Create sums out of the first 6 diagonals. Look something like this?" << ENDL;
  fibonacci(6);
  COUT << "The diagonals of Pascal's triangle create the digits in the fibonacci sequence" << ENDL;
  COUT << "For this example, disregarding the first two 1s, we can see the patter of 2 3 5 8" << ENDL;
  COUT << "This pattern is used by the human body to create knuckles" << ENDL;
  COUT << "The proportion of the four knuckles in your hand is 2 2 5 8. Pretty neat" << ENDL << EDNL;

  COUT << "------TEST 2------" << ENDL;
  COUT << "Now create a triangle of 7 rows" << ENDL;
  doWork();
  COUT << "Do the diagonals add up to this?" << ENDL;
  fibonacci(7);
  COUT << "Take a look at the last three numbers of the sequence: 5 8 13" << ENDL;
  COUT << "You have probably seen those numbers before if you've played piano" << ENDL;
  COUT << "In one octave, a piano has 5 black keys, 8 white keys, and 13 total" << ENDL;
  COUT << "Pretty neat" << ENDL << ENDL;

  COUT << "------TEST 3------" << ENDL;


  return 0;
}
