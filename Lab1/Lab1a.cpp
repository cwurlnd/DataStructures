/********
 * File: Lab1a.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a function where the pointer to memory is passed by
 * reference and prints out specific addresses and values of each variable
 *******/

#include "Lab1.h"

void printAddresses(void* ref) {
  COUT << "Initial address of reference: " << ref << ENDL << ENDL;  
    
  COUT << "Long Unsigned Int: " << *((long unsigned int *)(ref)) << "\t at address " << ref << ENDL;
      
  ref += sizeof(long unsigned int);
  COUT << "Float: " << *((float *)(ref)) << "\t at address " << ref << ENDL;
          
  ref += sizeof(float);
  COUT << "Double: " << *((double *)(ref)) << "\t at address " << ref << ENDL;
              
  ref += sizeof(double);
  COUT << "Char: " << *((char *)(ref)) << "\t at address " << red << ENDL;
                
  COUT << "Final address of reference: " << reference << ENDL;  
}

int main() {
  long unsigned int space = sizeof(long unsigned int) + sizeof(float) + sizeof(double) + sizeof(char);

  void* node = malloc(space);

  nums();

  free(node);
}
