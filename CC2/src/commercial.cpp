/****************
 * File: commercial.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the tests for
 * the commercial application
 ***************/

#include "../include/commercial.h"

int main() {
  COUT << "Try with zip code" << ENDL;
  doWork();

  COUT << "Try with phone number" << ENDL;
  doWork();

  COUT << "Try with streets" << ENDL; 
  doWork();

  COUT << "Try with names" << ENDL;
  doWork();
}
