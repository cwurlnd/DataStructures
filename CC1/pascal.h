/*************
 * File: pascal.h
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file contains the function declarations for
 * the Pascal application
 ************/

#ifndef CC1
#define CC1

#include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define CERR std::cerr

int** makeTriangle(int rows);
void printTriangle(int** triangle, int numRows);
void doWork();

#endif
