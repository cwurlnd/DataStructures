/********
 * File: Lab1a.cpp
 * Author: Corey Wurl
 * NDID: 902091236
 *
 * This file creates a function where the pointer to memory is passed by
 * reference and prints out specific addresses and values of each variable
 *******/

#include "Lab1.h"


// Use the allocated memory and assign the appropriate values to the memory
void setNodeValues( void* reference, long unsigned int theLong, float theFlt, double theDbl, char theChar ){
    
  *((long unsigned int *)(reference)) = theLong;

  reference += sizeof(long unsigned int);
  *((float *)(reference)) = theFlt;
                
  reference += sizeof(float);
  *((double *)(reference)) = theDbl;

  reference += sizeof(double);
  *((char *)(reference)) = theChar;
                       
}

// Print the addresses and values of each variable
void printAddresses(void* ref) {

  COUT << ENDL << "Initial address of reference: " << ref << ENDL << ENDL;  
    
  COUT << "Long Unsigned Int: " << *((long unsigned int *)(ref)) << " at address " << ref << ENDL;
      
  ref += sizeof(long unsigned int);
  COUT << "Float: " << *((float *)(ref)) << " at address " << ref << ENDL;
          
  ref += sizeof(float);
  COUT << "Double\ " << *((double *)(ref)) << " at address " << ref << ENDL;
              
  ref += sizeof(double);
  COUT << "Char: " << *((char *)(ref)) << " at address " << ref << ENDL;
                
  COUT << "Final address of reference: " << ref << ENDL;  
}

int main() {
  long unsigned int l;
  float f;
  double d;
  char c;

  nums(l, f, d, c);

  long unsigned int nodeSize = sizeof(long unsigned int) + sizeof(float) + sizeof(double) + sizeof(char);

  void* node = malloc(nodeSize);

  setNodeValues(node, l, f, d, c);

  printAddresses(node);

  free(node);

  return 0;
}


