/****************
 * File: fibTest.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests comparing
 * Pascal to Fibonacci
 ****************/

#include "fibonacci.h"
#include "pascal.h"

int main() {
  // Test 1 that shows use of Pascal's with fibonacci and knuckles
  COUT << "------TEST 1------" << ENDL;
  COUT << "Create a triangle of 6 rows" << ENDL;
  doWork();
  COUT << "Create sums out of the first 6 diagonals. Look something like this?" << ENDL;
  fibonacci(6);
  COUT << "The diagonals of Pascal's triangle create the digits in the fibonacci sequence" << ENDL;
  COUT << "For this example, disregarding the first two 1s, we can see the pattern of 2 3 5 8" << ENDL;
  COUT << "This pattern is used by the human body to create knuckles" << ENDL;
  COUT << "The proportion of the four knuckles in your hand is 2 3 5 8. Pretty neat" << ENDL << ENDL;

  // Ask if user wants to continue
  COUT << "Would you like to continue to test 2? [y/n] ";
  char input;
  CIN >> input;
  if (input != 'y' && input!= 'Y') {
    return 0;
  }

  // Test 2 that shows use of Pascal's with fibonacci and pianos
  COUT << "------TEST 2------" << ENDL;
  COUT << "Now create a triangle of 7 rows" << ENDL;
  doWork();
  COUT << "Do the diagonals add up to this?" << ENDL;
  fibonacci(7);
  COUT << "Take a look at the last three numbers of the sequence: 5 8 13" << ENDL;
  COUT << "You have probably seen those numbers before if you've played piano" << ENDL;
  COUT << "In one octave, a piano has 5 black keys, 8 white keys, and 13 total, including the top and bottom" << ENDL;
  COUT << "Pretty neat" << ENDL << ENDL;

  // Ask if user wants to continue
  COUT << "Would you like to continue to test 3? [y/n] ";
  CIN >> input;
  if (input != 'y' && input!= 'Y') {
    return 0;
  }

  // Test 3 that shows use of Pascal's with fibonacci and miscellaneous things
  COUT << "------TEST 3------" << ENDL;
  COUT << "Try making a triangle with 10 rows" << ENDL;
  doWork();
  COUT << "Now let's take a look again at the fibonacci sequence, made by adding the diagonals" << ENDL;
  fibonacci(10);
  COUT << "Starting with the 2, divide each number with the one before it" << ENDL;
  COUT << "You should consistently get a value around 1.618, the golden ratio" << ENDL;
  COUT << "The golden ratio is seen all around the world, from Mona Lisa to the pyramids of Egypt" << ENDL;
  COUT << "It is crazy to think that Pascals triangle relates to so many real life things" << ENDL;
  COUT << "Pretty neat" << ENDL << ENDL;

  // Ask if user wants to continue
  COUT << "Would you like to continue to test 4? [y/n] ";
  CIN >> input;
  if (input != 'y' && input!= 'Y') {
    return 0;
  }

  // Test 4 that shows use of Pascal's with fibonacci and cryptography
  COUT << "------TEST 4------" << ENDL;
  COUT << "Finally, we'll take a look at the use of Pascal's triangle and the fibonacci sequence in coding" << ENDL;
  COUT << "Make a triangle of any amount of rows" << ENDL;
  doWork();
  COUT << "Enter the same amount of rows here: ";
  int numRows;
  CIN >> numRows; 
  fibonacci(numRows);
  COUT << "The fibonacci sequence has been used by cryptographers such as Agarwal to encode messages" << ENDL;
  COUT << "They use the fibonacci sequence to create a security key that allows messages to be unreadable without the key" << ENDL;
  COUT << "Not only is Pascal's triangle and the fibonacci sequence seen in nature but it is seen in our world of coding as well" << ENDL;
  COUT << "Pretty neat" << ENDL;

  return 0;
}
